#ifndef org_orekit_files_ilrs_CRD$RangeSupplement_H
#define org_orekit_files_ilrs_CRD$RangeSupplement_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
            mid_init$_7b0546b525dc44ca,
            mid_getCenterOfMassCorrection_dff5885c2c873297,
            mid_getDate_85703d13e302437e,
            mid_getNdFilterValue_dff5885c2c873297,
            mid_getRangeRate_dff5885c2c873297,
            mid_getSystemConfigurationId_11b109bd155ca898,
            mid_getTimeBiasApplied_dff5885c2c873297,
            mid_getTroposphericRefractionCorrection_dff5885c2c873297,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
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
