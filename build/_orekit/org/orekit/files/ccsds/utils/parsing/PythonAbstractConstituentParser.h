#ifndef org_orekit_files_ccsds_utils_parsing_PythonAbstractConstituentParser_H
#define org_orekit_files_ccsds_utils_parsing_PythonAbstractConstituentParser_H

#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
        }
        namespace utils {
          class FileFormat;
        }
        namespace ndm {
          class NdmConstituent;
          class ParsedUnitsBehavior;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            class PythonAbstractConstituentParser : public ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser {
             public:
              enum {
                mid_build_3d5ffc54bfa065da,
                mid_finalize_7ae3461a92a43152,
                mid_finalizeData_e470b6d9e0d979db,
                mid_finalizeHeader_e470b6d9e0d979db,
                mid_finalizeMetadata_e470b6d9e0d979db,
                mid_getHeader_2764986a35b07524,
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
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAbstractConstituentParser(jobject obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractConstituentParser(const PythonAbstractConstituentParser& obj) : ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser(obj) {}

              ::org::orekit::files::ccsds::ndm::NdmConstituent build() const;
              void finalize() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::section::Header getHeader() const;
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
        namespace utils {
          namespace parsing {
            extern PyType_Def PY_TYPE_DEF(PythonAbstractConstituentParser);
            extern PyTypeObject *PY_TYPE(PythonAbstractConstituentParser);

            class t_PythonAbstractConstituentParser {
            public:
              PyObject_HEAD
              PythonAbstractConstituentParser object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_PythonAbstractConstituentParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAbstractConstituentParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAbstractConstituentParser&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
