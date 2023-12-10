#ifndef org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H
#define org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmConstituent;
          namespace odm {
            class OdmHeader;
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
          namespace odm {

            class PythonOdmParser : public ::org::orekit::files::ccsds::ndm::odm::OdmParser {
             public:
              enum {
                mid_build_3204eef28de879bb,
                mid_finalize_0fa09c18fee449d5,
                mid_finalizeData_b108b35ef48e27bd,
                mid_finalizeHeader_b108b35ef48e27bd,
                mid_finalizeMetadata_b108b35ef48e27bd,
                mid_getFileFormat_66298c6188053be6,
                mid_getHeader_3423aca890fca0cd,
                mid_getMuSet_dff5885c2c873297,
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
                mid_setMuCreated_17db3a65980d3441,
                mid_setMuParsed_17db3a65980d3441,
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
