#!/usr/bin/python3

import re
import os

def cleanup(dir_path):
    for path in os.listdir(dir_path):
        full_path = os.path.join(dir_path, path)
        if os.path.isdir(full_path):
            cleanup(full_path)
        elif re.match(r'.*\.exe', full_path):
            os.remove(full_path)
            print(f"{full_path} executable was removed")


cleanup('./')