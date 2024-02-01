#ifndef org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class TimeConverter;
        }
        namespace utils {
          namespace generation {
            class MessageWriter;
            class Generator;
          }
          class ContextBinding;
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
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            class AbstractMessageWriter : public ::java::lang::Object {
             public:
              enum {
                mid_init$_3026836a952fe988,
                mid_getContext_fc8d452549dd65ec,
                mid_getDefaultVersion_9981f74b2d109da6,
                mid_getFormatVersionKey_d2c8eb4129821f0e,
                mid_getRoot_d2c8eb4129821f0e,
                mid_getTimeConverter_45cb786b56bfc0bf,
                mid_getVersion_9981f74b2d109da6,
                mid_setContext_1564c35f88556e3e,
                mid_writeFooter_05c6d36d73082fa6,
                mid_writeHeader_df6f5cf94f18077d,
                mid_writeSegment_fe05c5cc7a835818,
                mid_writeSegmentContent_305aa7864995b122,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractMessageWriter(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractMessageWriter(const AbstractMessageWriter& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *DEFAULT_ORIGINATOR;

              AbstractMessageWriter(const ::java::lang::String &, const ::java::lang::String &, jdouble, const ::org::orekit::files::ccsds::utils::ContextBinding &);

              ::org::orekit::files::ccsds::utils::ContextBinding getContext() const;
              jdouble getDefaultVersion() const;
              ::java::lang::String getFormatVersionKey() const;
              ::java::lang::String getRoot() const;
              ::org::orekit::files::ccsds::definitions::TimeConverter getTimeConverter() const;
              jdouble getVersion() const;
              void setContext(const ::org::orekit::files::ccsds::utils::ContextBinding &) const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractMessageWriter);
            extern PyTypeObject *PY_TYPE(AbstractMessageWriter);

            class t_AbstractMessageWriter {
            public:
              PyObject_HEAD
              AbstractMessageWriter object;
              PyTypeObject *parameters[3];
              static PyTypeObject **parameters_(t_AbstractMessageWriter *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AbstractMessageWriter&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AbstractMessageWriter&, PyTypeObject *, PyTypeObject *, PyTypeObject *);
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
