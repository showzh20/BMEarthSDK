//
//  BMFile.hpp
//  BigeEarth
//
//  Created by HerryBabaer on 2020/9/14.
//  Copyright © 2020 赵洪. All rights reserved.
//

#ifndef BMFile_hpp
#define BMFile_hpp

#include <string>

class BMFile
{
public:
    static void readBMVFile(uint64_t layerID,std::string filePath);
    
    /// 保存BMV文件
    /// @param id 保存文件的id
    /// @param filepath 保存的文件名和路径
    static void writeBMVFile(uint64_t id,std::string filepath);
    
    static bool writeMutiBMVFile(std::vector<uint64_t> id,std::string filepath);
};


#endif /* BMFile_hpp */
