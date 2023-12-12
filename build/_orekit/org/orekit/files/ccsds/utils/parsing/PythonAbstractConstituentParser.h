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
        namespace ndm {
          class ParsedUnitsBehavior;
          class NdmConstituent;
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
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
                mid_build_303f51e33561a967,
                mid_finalize_0640e6acf969ed28,
                mid_finalizeData_89b302893bdbe1f1,
                mid_finalizeHeader_89b302893bdbe1f1,
                mid_finalizeMetadata_89b302893bdbe1f1,
                mid_getHeader_6fe6597816e9e593,
                mid_inData_89b302893bdbe1f1,
                mid_inHeader_89b302893bdbe1f1,
                mid_inMetadata_89b302893bdbe1f1,
                mid_prepareData_89b302893bdbe1f1,
                mid_prepareHeader_89b302893bdbe1f1,
                mid_prepareMetadata_89b302893bdbe1f1,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_reset_a580586827f4ec13,
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
