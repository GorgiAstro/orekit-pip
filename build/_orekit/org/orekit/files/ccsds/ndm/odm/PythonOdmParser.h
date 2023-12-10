#ifndef org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H
#define org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            class OdmHeader;
          }
          class NdmConstituent;
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace utils {
      class IERSConventions;
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
      namespace ccsds {
        namespace ndm {
          namespace odm {

            class PythonOdmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
             public:
              enum {
                mid_build_3d5ffc54bfa065da,
                mid_finalize_7ae3461a92a43152,
                mid_finalizeData_e470b6d9e0d979db,
                mid_finalizeHeader_e470b6d9e0d979db,
                mid_finalizeMetadata_e470b6d9e0d979db,
                mid_getFileFormat_b51f613f857a5e84,
                mid_getHeader_720b26b998d380f3,
                mid_getMuSet_456d9a2f64d6b28d,
                mid_inData_e470b6d9e0d979db,
                mid_inHeader_e470b6d9e0d979db,
                mid_inMetadata_e470b6d9e0d979db,
                mid_prepareData_e470b6d9e0d979db,
                mid_prepareHeader_e470b6d9e0d979db,
                mid_prepareMetadata_e470b6d9e0d979db,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
                mid_reset_052c3a3464b50355,
                mid_setMuCreated_77e0f9a1f260e2e5,
                mid_setMuParsed_77e0f9a1f260e2e5,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonOdmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonOdmParser(const PythonOdmParser& obj) : ::org::orekit::files::ccsds::ndm::odm::OdmParser(obj) {}

              ::org::orekit::files::ccsds::ndm::NdmConstituent build() const;
              void finalize() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::utils::FileFormat getFileFormat() const;
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader getHeader() const;
              jdouble getMuSet() const;
              jboolean inData() const;
              jboolean inHeader() const;
              jboolean inMetadata() const;
              jboolean prepareData() const;
              jboolean prepareHeader() const;
              jboolean prepareMetadata() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void reset(const ::org::orekit::files::ccsds::utils::FileFormat &) const;
              void setMuCreated(jdouble) const;
              void setMuParsed(jdouble) const;
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
          namespace odm {
            extern PyType_Def PY_TYPE_DEF(PythonOdmParser);
            extern PyTypeObject *PY_TYPE(PythonOdmParser);

            class t_PythonOdmParser {
            public:
              PyObject_HEAD
              PythonOdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_PythonOdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonOdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonOdmParser&, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
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
