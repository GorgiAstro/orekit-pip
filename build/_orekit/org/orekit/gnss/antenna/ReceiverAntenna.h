#ifndef org_orekit_gnss_antenna_ReceiverAntenna_H
#define org_orekit_gnss_antenna_ReceiverAntenna_H

#include "org/orekit/gnss/antenna/Antenna.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
      class Frequency;
    }
  }
}
namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class ReceiverAntenna : public ::org::orekit::gnss::antenna::Antenna {
         public:
          enum {
            mid_init$_2a5ab322b81321ef,
            mid_getSerialNumber_d2c8eb4129821f0e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ReceiverAntenna(jobject obj) : ::org::orekit::gnss::antenna::Antenna(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ReceiverAntenna(const ReceiverAntenna& obj) : ::org::orekit::gnss::antenna::Antenna(obj) {}

          ReceiverAntenna(const ::java::lang::String &, const ::java::lang::String &, const ::java::util::Map &, const ::java::lang::String &);

          ::java::lang::String getSerialNumber() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        extern PyType_Def PY_TYPE_DEF(ReceiverAntenna);
        extern PyTypeObject *PY_TYPE(ReceiverAntenna);

        class t_ReceiverAntenna {
        public:
          PyObject_HEAD
          ReceiverAntenna object;
          static PyObject *wrap_Object(const ReceiverAntenna&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
