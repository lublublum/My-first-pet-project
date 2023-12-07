cmake_minimum_required(VERSION 3.5)

project(MyFirstPetProject VERSION 0.1.0 LANGUAGES C CXX)

file(GLOB
    CPPS "*.cpp"
    HS "*.h")       

add_executable(${PROJECT_NAME} ${CPPS} ${HS})
