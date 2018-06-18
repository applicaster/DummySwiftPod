//
//  EmptySwiftPod.swift
//  EmptySwiftPod
//
//  Created by IlanL on 18/06/2018.
//  Copyright © 2018 Applicaster Ltd. All rights reserved.
//

import Foundation

public class SomeClass {
    
    public init() {
        print("Init - Empty Swift Pod")
    }
    
    public func sayHello() -> String {
        return "Hello You"
    }
    
    deinit {
        print("Deinit - Empty Swift Pod")
    }
}
