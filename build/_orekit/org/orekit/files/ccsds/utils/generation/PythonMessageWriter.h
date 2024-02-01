#ifndef org_orekit_files_ccsds_utils_generation_PythonMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_PythonMessageWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
        }
        namespace section {
          class Header;
          class Segment;
        }
        namespace ndm {
          class NdmConstituent;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            class PythonMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_ff7cb6c242604316,
                mid_finalize_ff7cb6c242604316,
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getRoot_d2c8eb4129821f0e,
                mid_getVersion_9981f74b2d109da6,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                mid_writeFooter_05c6d36d73082fa6,
                mid_writeHeader_df6f5cf94f18077d,
                mid_writeSegment_fe05c5cc7a835818,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonMessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonMessageWriter(const PythonMessageWriter& obj) : ::java::lang::Object(obj) {}

              PythonMessageWriter();

              void finalize() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              jdouble getVersion() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              void writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
              void writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Header &) const;
              void writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Segment &) const;
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
          namespace generation {
            extern PyType_Def PY_TYPE_DEF(PythonMessageWriter);
            extern PyTypeObject *PY_TYPE(PythonMessageWriter);

            class t_PythonMessageWriter {
            public:
              PyObject_HEAD
              PythonMessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_PythonMessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonMessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonMessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
