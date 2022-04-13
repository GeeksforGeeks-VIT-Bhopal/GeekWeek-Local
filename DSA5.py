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
