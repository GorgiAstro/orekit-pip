#ifndef org_orekit_files_sinex_Dcb_H
#define org_orekit_files_sinex_Dcb_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class HashSet;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace util {
      class Pair;
    }
  }
  namespace orekit {
    namespace gnss {
      class ObservationType;
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
      namespace sinex {

        class Dcb : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0fa09c18fee449d5,
            mid_addDcbLine_4f8497a13a203241,
            mid_getAvailableObservationPairs_f7c51ce9ecdd2548,
            mid_getDcb_f49da90729a92c95,
            mid_getDcb_a2371a506507114c,
            mid_getMaximumValidDateForObservationPair_28607228106a09f1,
            mid_getMaximumValidDateForObservationPair_359e633219ef4315,
            mid_getMinimumValidDateForObservationPair_28607228106a09f1,
            mid_getMinimumValidDateForObservationPair_359e633219ef4315,
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
