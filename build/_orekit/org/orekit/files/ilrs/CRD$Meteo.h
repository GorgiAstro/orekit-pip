#ifndef org_orekit_files_ilrs_CRD$Meteo_H
#define org_orekit_files_ilrs_CRD$Meteo_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
    class SortedSet;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ilrs {
        class CRD$MeteorologicalMeasurement;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        class CRD$Meteo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a422fab7ffe774b8,
            mid_getData_d751c1a57012b438,
            mid_getMeteo_2bb7a0ceebe4cc7e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CRD$Meteo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CRD$Meteo(const CRD$Meteo& obj) : ::java::lang::Object(obj) {}

          CRD$Meteo(const ::java::util::SortedSet &);

          ::java::util::List getData() const;
          ::org::orekit::files::ilrs::CRD$MeteorologicalMeasurement getMeteo(const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(CRD$Meteo);
        extern PyTypeObject *PY_TYPE(CRD$Meteo);

        class t_CRD$Meteo {
        public:
          PyObject_HEAD
          CRD$Meteo object;
          static PyObject *wrap_Object(const CRD$Meteo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
