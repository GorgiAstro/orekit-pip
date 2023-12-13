#ifndef org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            class Generator;
            class MessageWriter;
          }
          class ContextBinding;
        }
        namespace section {
          class Segment;
          class Header;
        }
        namespace definitions {
          class TimeConverter;
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
                mid_init$_171dbda6f9dc03f2,
                mid_getContext_f24ed3335bf508bc,
                mid_getDefaultVersion_b74f83833fdad017,
                mid_getFormatVersionKey_1c1fa1e935d6cdcf,
                mid_getRoot_1c1fa1e935d6cdcf,
                mid_getTimeConverter_cf100f800540ff49,
                mid_getVersion_b74f83833fdad017,
                mid_setContext_db5d6d07a090d1f4,
                mid_writeFooter_fb222e851cd27682,
                mid_writeHeader_5f2a5114115bbdb2,
                mid_writeSegment_1cabdf4a5e993579,
                mid_writeSegmentContent_309d7ce7156c8c23,
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
