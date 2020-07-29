  case 'Y':
    case 'y':
      response = "You are enrolled";
      break;
    case 'N':
    case 'n':
      response = "You are not enrolled. To enroll go to our website";
    default:
      response = "You pressed the wrong key, please either press y or n";
      break;