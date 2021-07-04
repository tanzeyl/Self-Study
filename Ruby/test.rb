dns_raw = File.readlines("zone.txt")
def parse_dns(dns_raw)
  dns_records.each do
    {
      |row|
      new_list = row.split(",")
      new_list.each
    }
  for i in 0...dns_raw.length
    new_list = dns_raw[i].split()
    for j in 0...new_list.length
      new_list[j] = new_list[j].strip
    end
  end
end

dns_records = parse_dns(dns_raw)
puts dns_records
