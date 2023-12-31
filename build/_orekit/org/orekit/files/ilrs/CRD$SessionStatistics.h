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
            mid_init$_63ed8820ae480a9f,
            mid_getDataQulityIndicator_55546ef6a647f39b,
            mid_getKurtosis_b74f83833fdad017,
            mid_getPeakMinusMean_b74f83833fdad017,
            mid_getRms_b74f83833fdad017,
            mid_getSkewness_b74f83833fdad017,
            mid_getSystemConfigurationId_1c1fa1e935d6cdcf,
            mid_toCrdString_1c1fa1e935d6cdcf,
            mid_toString_1c1fa1e935d6cdcf,
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
