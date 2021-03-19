class AirlinerSeats(object):
    def mostAisleSeats(self, width, seats):
        result = ['.' for _ in xrange(width)]
        num_seats_used = 0
        current_index = width - 1
        should_place_seat_flag = 1
        while num_seats_used < seats and current_index >= 0:
            if should_place_seat_flag in (1, 3):
                result[current_index] = 'S'
                num_seats_used += 1
                if should_place_seat_flag == 3:
                    should_place_seat_flag = 1
                else:
                    should_place_seat_flag += 1
            else:
                should_place_seat_flag += 1
            current_index -= 1
        current_index = width - 2
        while num_seats_used < seats:
            result[current_index] = 'S'
            num_seats_used += 1
            current_index -= 3
        if width <= 50:
            return (''.join(result))
        elif width <= 100:
            return (''.join(result[:50]), ''.join(result[50:]))
        else:
            return (''.join(result[:50]), ''.join(result[len(result) - 50:]))
