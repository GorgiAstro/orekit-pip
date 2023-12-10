#ifndef org_orekit_gnss_antenna_ReceiverAntenna_H
#define org_orekit_gnss_antenna_ReceiverAntenna_H

#include "org/orekit/gnss/antenna/Antenna.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        class ReceiverAntenna : public ::org::orekit::gnss::antenna::Antenna {
         public:
          enum {
            mid_init$_a6279989875ad2c2,
            mid_getSerialNumber_11b109bd155ca898,
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
