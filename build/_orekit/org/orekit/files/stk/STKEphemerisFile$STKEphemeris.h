#ifndef org_orekit_files_stk_STKEphemerisFile$STKEphemeris_H
#define org_orekit_files_stk_STKEphemerisFile$STKEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
      namespace stk {
        class STKEphemerisFile$STKEphemerisSegment;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFile$STKEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_efa13fade9859f0d,
            mid_getId_d2c8eb4129821f0e,
            mid_getMu_9981f74b2d109da6,
            mid_getSegments_d751c1a57012b438,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFile$STKEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFile$STKEphemeris(const STKEphemerisFile$STKEphemeris& obj) : ::java::lang::Object(obj) {}

          STKEphemerisFile$STKEphemeris(const ::java::lang::String &, jdouble, const ::java::util::List &);

          ::java::lang::String getId() const;
          jdouble getMu() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFile$STKEphemeris);
        extern PyTypeObject *PY_TYPE(STKEphemerisFile$STKEphemeris);

        class t_STKEphemerisFile$STKEphemeris {
        public:
          PyObject_HEAD
          STKEphemerisFile$STKEphemeris object;
          static PyObject *wrap_Object(const STKEphemerisFile$STKEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
