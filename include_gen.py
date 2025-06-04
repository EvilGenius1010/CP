import os

header_dir = "templates"
output_file = "all_headers.h"

with open(output_file, "w") as out:
    out.write("// Auto-generated file. Do not edit manually.\n\n")
    for filename in os.listdir(header_dir):
        if filename.endswith(".h"):
            out.write(f'#include "{header_dir}/{filename}"\n')

print(f"Generated {output_file} with all headers from {header_dir}/")
