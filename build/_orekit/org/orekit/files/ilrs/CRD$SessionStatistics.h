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
            mid_init$_f7c7df29365814a4,
            mid_getDataQulityIndicator_412668abc8d889e9,
            mid_getKurtosis_557b8123390d8d0c,
            mid_getPeakMinusMean_557b8123390d8d0c,
            mid_getRms_557b8123390d8d0c,
            mid_getSkewness_557b8123390d8d0c,
            mid_getSystemConfigurationId_3cffd47377eca18a,
            mid_toCrdString_3cffd47377eca18a,
            mid_toString_3cffd47377eca18a,
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
