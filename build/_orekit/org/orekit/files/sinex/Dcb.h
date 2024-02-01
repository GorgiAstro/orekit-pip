#ifndef org_orekit_files_sinex_Dcb_H
#define org_orekit_files_sinex_Dcb_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace gnss {
      class ObservationType;
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
            mid_init$_ff7cb6c242604316,
            mid_addDcbLine_fa57b3bfb6279c6a,
            mid_getAvailableObservationPairs_1998857fa494dab0,
            mid_getDcb_3fd9035881e68d06,
            mid_getDcb_59fef3f2ed009dbd,
            mid_getMaximumValidDateForObservationPair_a436120993303ce2,
            mid_getMaximumValidDateForObservationPair_8b64bfed1fcdfdd9,
            mid_getMinimumValidDateForObservationPair_a436120993303ce2,
            mid_getMinimumValidDateForObservationPair_8b64bfed1fcdfdd9,
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
