#ifndef org_orekit_files_sinex_Dcb_H
#define org_orekit_files_sinex_Dcb_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class ObservationType;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace util {
      class Pair;
    }
  }
}
namespace java {
  namespace util {
    class HashSet;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class Dcb : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7ae3461a92a43152,
            mid_addDcbLine_0c5b45c2d14b8033,
            mid_getAvailableObservationPairs_22daa3e0ba65a6b7,
            mid_getDcb_17a39db9f850590b,
            mid_getDcb_81cde50cf4f9dfd5,
            mid_getMaximumValidDateForObservationPair_26e5de0fefb7beed,
            mid_getMaximumValidDateForObservationPair_011c5e51b9c14cac,
            mid_getMinimumValidDateForObservationPair_26e5de0fefb7beed,
            mid_getMinimumValidDateForObservationPair_011c5e51b9c14cac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Dcb(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Dcb(const Dcb& obj) : ::java::lang::Object(obj) {}

          Dcb();

          void addDcbLine(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
          ::java::util::HashSet getAvailableObservationPairs() const;
          jdouble getDcb(const ::org::orekit::gnss::ObservationType &, const ::org::orekit::gnss::ObservationType &, const ::org::orekit::time::AbsoluteDate &) const;
          jdouble getDcb(const ::java::lang::String &, const ::java::lang::String &, const ::org::orekit::time::AbsoluteDate &) const;
          ::org::orekit::time::AbsoluteDate getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType &, const ::org::orekit::gnss::ObservationType &) const;
          ::org::orekit::time::AbsoluteDate getMaximumValidDateForObservationPair(const ::java::lang::String &, const ::java::lang::String &) const;
          ::org::orekit::time::AbsoluteDate getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType &, const ::org::orekit::gnss::ObservationType &) const;
          ::org::orekit::time::AbsoluteDate getMinimumValidDateForObservationPair(const ::java::lang::String &, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(Dcb);
        extern PyTypeObject *PY_TYPE(Dcb);

        class t_Dcb {
        public:
          PyObject_HEAD
          Dcb object;
          static PyObject *wrap_Object(const Dcb&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
