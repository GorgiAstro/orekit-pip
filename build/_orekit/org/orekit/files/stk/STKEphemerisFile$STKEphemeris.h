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
    namespace files {
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
      namespace stk {
        class STKEphemerisFile$STKEphemerisSegment;
      }
    }
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_d0a6ea578b35c45e,
            mid_getId_0090f7797e403f43,
            mid_getMu_456d9a2f64d6b28d,
            mid_getSegments_a6156df500549a58,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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
