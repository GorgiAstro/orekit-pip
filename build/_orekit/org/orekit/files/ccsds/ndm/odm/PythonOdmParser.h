#ifndef org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H
#define org_orekit_files_ccsds_ndm_odm_PythonOdmParser_H

#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace utils {
          class FileFormat;
        }
        namespace ndm {
          namespace odm {
            class OdmHeader;
          }
          class NdmConstituent;
          class ParsedUnitsBehavior;
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
                mid_build_2ec5724104d9082e,
                mid_finalize_a1fa5dae97ea5ed2,
                mid_finalizeData_9ab94ac1dc23b105,
                mid_finalizeHeader_9ab94ac1dc23b105,
                mid_finalizeMetadata_9ab94ac1dc23b105,
                mid_getFileFormat_e4c64bde02ca34c3,
                mid_getHeader_de29107d9fd9c097,
                mid_getMuSet_b74f83833fdad017,
                mid_inData_9ab94ac1dc23b105,
                mid_inHeader_9ab94ac1dc23b105,
                mid_inMetadata_9ab94ac1dc23b105,
                mid_prepareData_9ab94ac1dc23b105,
                mid_prepareHeader_9ab94ac1dc23b105,
                mid_prepareMetadata_9ab94ac1dc23b105,
                mid_pythonDecRef_a1fa5dae97ea5ed2,
                mid_pythonExtension_6c0ce7e438e5ded4,
                mid_pythonExtension_3d7dd2314a0dd456,
                mid_reset_28163d47221b3cf7,
                mid_setMuCreated_8ba9fe7a847cecad,
                mid_setMuParsed_8ba9fe7a847cecad,
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
