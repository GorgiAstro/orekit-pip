#ifndef org_orekit_files_ilrs_CRD$SessionStatistics_H
#define org_orekit_files_ilrs_CRD$SessionStatistics_H

#include "java/lang/Object.h"

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

        class CRD$SessionStatistics : public ::java::lang::Object {
         public:
          enum {
            mid_init$_db837d160336a437,
            mid_getDataQulityIndicator_570ce0828f81a2c1,
            mid_getKurtosis_dff5885c2c873297,
            mid_getPeakMinusMean_dff5885c2c873297,
            mid_getRms_dff5885c2c873297,
            mid_getSkewness_dff5885c2c873297,
            mid_getSystemConfigurationId_11b109bd155ca898,
            mid_toCrdString_11b109bd155ca898,
            mid_toString_11b109bd155ca898,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$SessionStatistics(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$SessionStatistics(const CRD$SessionStatistics& obj) : ::java::lang::Object(obj) {}

          CRD$SessionStatistics(const ::java::lang::String &, jdouble, jdouble, jdouble, jdouble, jint);

          jint getDataQulityIndicator() const;
          jdouble getKurtosis() const;
          jdouble getPeakMinusMean() const;
          jdouble getRms() const;
          jdouble getSkewness() const;
          ::java::lang::String getSystemConfigurationId() const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$SessionStatistics);
        extern PyTypeObject *PY_TYPE(CRD$SessionStatistics);

        class t_CRD$SessionStatistics {
        public:
          PyObject_HEAD
          CRD$SessionStatistics object;
          static PyObject *wrap_Object(const CRD$SessionStatistics&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
