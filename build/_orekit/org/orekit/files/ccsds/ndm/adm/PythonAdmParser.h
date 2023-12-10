#ifndef org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H
#define org_orekit_files_ccsds_ndm_adm_PythonAdmParser_H

#include "org/orekit/files/ccsds/ndm/adm/AdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmConstituent;
          namespace adm {
            class AdmHeader;
          }
          class ParsedUnitsBehavior;
        }
        namespace utils {
          class FileFormat;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
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
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            class PythonAdmParser : public ::org::orekit::files::ccsds::ndm::adm::AdmParser {
             public:
              enum {
                mid_build_3204eef28de879bb,
                mid_finalize_0fa09c18fee449d5,
                mid_finalizeData_b108b35ef48e27bd,
                mid_finalizeHeader_b108b35ef48e27bd,
                mid_finalizeMetadata_b108b35ef48e27bd,
                mid_getHeader_58c0f76fc10a27f5,
                mid_inData_b108b35ef48e27bd,
                mid_inHeader_b108b35ef48e27bd,
                mid_inMetadata_b108b35ef48e27bd,
                mid_prepareData_b108b35ef48e27bd,
                mid_prepareHeader_b108b35ef48e27bd,
                mid_prepareMetadata_b108b35ef48e27bd,
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
                mid_reset_e250621f009e45db,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAdmParser(jobject obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAdmParser(const PythonAdmParser& obj) : ::org::orekit::files::ccsds::ndm::adm::AdmParser(obj) {}

              ::org::orekit::files::ccsds::ndm::NdmConstituent build() const;
              void finalize() const;
              jboolean finalizeData() const;
              jboolean finalizeHeader() const;
              jboolean finalizeMetadata() const;
              ::org::orekit::files::ccsds::ndm::adm::AdmHeader getHeader() const;
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
        namespace ndm {
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(PythonAdmParser);
            extern PyTypeObject *PY_TYPE(PythonAdmParser);

            class t_PythonAdmParser {
            public:
              PyObject_HEAD
              PythonAdmParser object;
              PyTypeObject *parameters[2];
              static PyTypeObject **parameters_(t_PythonAdmParser *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonAdmParser&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonAdmParser&, PyTypeObject *, PyTypeObject *);
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
