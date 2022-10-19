# DSA_TA_2

>- Date : 2022/10/19
>- Presented by : Chuang Yu Hsin

## Requirement
* OS : MacOS, Ubuntu 20.04 ...
* gcc
* make

## File structure
```bash
DSA_TA_2/
        ├──bin/         # binary file which can execute
        │   
        ├──obj/         # object file which can be linked
        │ 
        ├──inc/         # header file
        │   └── ...
        ├──src/         # C code
        │   └── ...
        │
        ├──build.sh     # bash script
        ├──Makefile     # make file
        └──README.md    # this file 
```

## Compile
```sh
sudo chmod +x build.sh
./build.sh
```

## Run
```sh
cd bin
./main --name name1 name2       # Run
```