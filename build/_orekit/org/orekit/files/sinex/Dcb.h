#ifndef org_orekit_files_sinex_Dcb_H
#define org_orekit_files_sinex_Dcb_H

#include "java/lang/Object.h"

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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addDcbLine_04cccaba0f852d8d,
            mid_getAvailableObservationPairs_eecd1cf6328441dd,
            mid_getDcb_343280e5d0dc9f9c,
            mid_getDcb_8626587a670ef0c2,
            mid_getMaximumValidDateForObservationPair_7a270440aa82b138,
            mid_getMaximumValidDateForObservationPair_34d1cd66a625fdb5,
            mid_getMinimumValidDateForObservationPair_7a270440aa82b138,
            mid_getMinimumValidDateForObservationPair_34d1cd66a625fdb5,
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
