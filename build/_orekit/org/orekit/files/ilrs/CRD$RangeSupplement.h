#ifndef org_orekit_files_ilrs_CRD$RangeSupplement_H
#define org_orekit_files_ilrs_CRD$RangeSupplement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRD$RangeSupplement : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ada587be4a153979,
            mid_getCenterOfMassCorrection_456d9a2f64d6b28d,
            mid_getDate_aaa854c403487cf3,
            mid_getNdFilterValue_456d9a2f64d6b28d,
            mid_getRangeRate_456d9a2f64d6b28d,
            mid_getSystemConfigurationId_0090f7797e403f43,
            mid_getTimeBiasApplied_456d9a2f64d6b28d,
            mid_getTroposphericRefractionCorrection_456d9a2f64d6b28d,
            mid_toCrdString_0090f7797e403f43,
            mid_toString_0090f7797e403f43,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$RangeSupplement(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$RangeSupplement(const CRD$RangeSupplement& obj) : ::java::lang::Object(obj) {}

          CRD$RangeSupplement(const ::org::orekit::time::AbsoluteDate &, const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble, jdouble);

          jdouble getCenterOfMassCorrection() const;
          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getNdFilterValue() const;
          jdouble getRangeRate() const;
          ::java::lang::String getSystemConfigurationId() const;
          jdouble getTimeBiasApplied() const;
          jdouble getTroposphericRefractionCorrection() const;
          ::java::lang::String toCrdString() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CRD$RangeSupplement);
        extern PyTypeObject *PY_TYPE(CRD$RangeSupplement);

        class t_CRD$RangeSupplement {
        public:
          PyObject_HEAD
          CRD$RangeSupplement object;
          static PyObject *wrap_Object(const CRD$RangeSupplement&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
