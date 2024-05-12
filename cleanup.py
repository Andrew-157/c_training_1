# !/usr/bin/python3

import re
import os

compiling_intermediate_files = {
    "Preprocessed file": r".*\.i",
    "Assembly code file": r".*\.s",
    "Object code file": r".*\.o",
    "Executable file": r".*\.exe"
}

def cleanup(dir_path):
    for path in os.listdir(dir_path):
        full_path = os.path.join(dir_path, path)
        if os.path.isdir(full_path):
            cleanup(full_path)
        else:
            for k, v in compiling_intermediate_files.items():
                if re.match(v, full_path):
                    os.remove(full_path)
                    print(f"{k}: {full_path} was removed")


cleanup('./')