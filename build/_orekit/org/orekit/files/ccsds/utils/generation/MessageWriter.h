#ifndef org_orekit_files_ccsds_utils_generation_MessageWriter_H
#define org_orekit_files_ccsds_utils_generation_MessageWriter_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          class Header;
          class Segment;
        }
        namespace ndm {
          class NdmConstituent;
        }
        namespace utils {
          namespace generation {
            class Generator;
          }
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

            class MessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getRoot_d2c8eb4129821f0e,
                mid_getVersion_9981f74b2d109da6,
                mid_writeFooter_05c6d36d73082fa6,
                mid_writeHeader_df6f5cf94f18077d,
                mid_writeMessage_d663c14e7d793f18,
                mid_writeSegment_fe05c5cc7a835818,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit MessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              MessageWriter(const MessageWriter& obj) : ::java::lang::Object(obj) {}

              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              jdouble getVersion() const;
              void writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator &) const;
              void writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::section::Header &) const;
              void writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator &, const ::org::orekit::files::ccsds::ndm::NdmConstituent &) const;
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
            extern PyType_Def PY_TYPE_DEF(MessageWriter);
            extern PyTypeObject *PY_TYPE(MessageWriter);

            class t_MessageWriter {
            public:
              PyObject_HEAD
              MessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_MessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const MessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const MessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
