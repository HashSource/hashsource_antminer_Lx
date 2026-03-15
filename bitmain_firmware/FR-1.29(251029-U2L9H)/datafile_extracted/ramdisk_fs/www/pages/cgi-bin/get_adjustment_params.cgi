echo
echo
if [ -f /etc/topol.conf ]; then
jq -c '
{
    hashrate_percent_min: (.adjust_strategy.hashrate_percent_min // null),
    hashrate_percent_max: (.adjust_strategy.hashrate_percent_max // null),
    power_target_min: (.min_custom_power // null),
    power_target_max: (.max_custom_power // null)
}' /etc/topol.conf
else
echo "{\"hashrate_percent_min\": \"$hashrate_percent_min\", \"hashrate_percent_max\": \"$hashrate_percent_max\",\"power_target_min\": \"$power_target_min\", \"power_target_max\": \"$power_target_max\"}"
fi