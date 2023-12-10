#ifndef org_orekit_files_ccsds_ndm_tdm_PythonRangeUnitsConverter_H
#define org_orekit_files_ccsds_ndm_tdm_PythonRangeUnitsConverter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class TdmMetadata;
            class RangeUnitsConverter;
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class PythonRangeUnitsConverter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_finalize_7ae3461a92a43152,
                mid_metersToRu_84fe3cf394b0532d,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
                mid_ruToMeters_84fe3cf394b0532d,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonRangeUnitsConverter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonRangeUnitsConverter(const PythonRangeUnitsConverter& obj) : ::java::lang::Object(obj) {}

              PythonRangeUnitsConverter();

              void finalize() const;
              jdouble metersToRu(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              jdouble ruToMeters(const ::org::orekit::files::ccsds::ndm::tdm::TdmMetadata &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(PythonRangeUnitsConverter);
            extern PyTypeObject *PY_TYPE(PythonRangeUnitsConverter);

            class t_PythonRangeUnitsConverter {
            public:
              PyObject_HEAD
              PythonRangeUnitsConverter object;
              static PyObject *wrap_Object(const PythonRangeUnitsConverter&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
