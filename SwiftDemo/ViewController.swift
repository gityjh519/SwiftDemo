//
//  ViewController.swift
//  SwiftDemo
//
//  Created by yaojinhai on 2019/10/24.
//  Copyright © 2019 yaojinhai. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let modelPoint = readPersonModel();
        let model = modelPoint?.pointee;
        let name = model?.name;
        let birthday = model?.birthday;
        let age = model?.age;
        
        let swiftName = String(cString: name!);
        let swiftBirthday = convertCharArray(any: birthday!)
        
        print("name =\(swiftName),\(swiftBirthday),age \(age)");
    }
    
    func convertCharArray(any: Any) -> String {
        
        let mirr = Mirror(reflecting: any);
        let count = mirr.children.count;
        let point = UnsafeMutablePointer<Int8>.allocate(capacity: count);
        for (idx,item) in mirr.children.enumerated() {
            if let value = item.value as? Int8 {
                point[idx] = value;
            }
        }
        let result = String(cString: point);
        point.deallocate();
        return result;
    }
    
    func convertString(any: Any) -> String {
        
        let mirror = Mirror(reflecting: any);
        let resutStrl = mirror.children.reduce("") { (result, arg1) -> String in
            guard let intValue = arg1.value as? Int8, intValue > 0 else{
                return result;
            }
            let strl = String(UnicodeScalar.init(UInt8(intValue)));
            return result + strl;
        }
        return resutStrl;
        
    }


}

