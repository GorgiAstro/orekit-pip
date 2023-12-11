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
            mid_init$_0640e6acf969ed28,
            mid_addDcbLine_f8425e5f06189d8f,
            mid_getAvailableObservationPairs_fc7b48c0d5e6c265,
            mid_getDcb_eba7bc87dc9f0799,
            mid_getDcb_a93d9d84dcac73ce,
            mid_getMaximumValidDateForObservationPair_d490791b6f858d32,
            mid_getMaximumValidDateForObservationPair_8fa5e032962a0c87,
            mid_getMinimumValidDateForObservationPair_d490791b6f858d32,
            mid_getMinimumValidDateForObservationPair_8fa5e032962a0c87,
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
