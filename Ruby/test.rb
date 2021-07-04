dns_raw = File.readlines("zone.txt")

def parse_dns(dns_raw)
  for i in 0...dns_raw.length
    new_list = dns_raw[i].split()
    for j in 0...new_list.length
      new_list[j] = new_list[j].strip
    end
  end
  string = new_list.join()
  
end

dns_records = parse_dns(dns_raw)
puts dns_records
