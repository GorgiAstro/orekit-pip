#ifndef org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H
#define org_orekit_files_ccsds_utils_generation_AbstractMessageWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          class NdmConstituent;
        }
        namespace utils {
          namespace generation {
            class Generator;
            class MessageWriter;
          }
          class ContextBinding;
        }
        namespace definitions {
          class TimeConverter;
        }
        namespace section {
          class Header;
          class Segment;
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
                mid_init$_2a0a7c2e7c34a644,
                mid_getContext_c779ff7fea6f1993,
                mid_getDefaultVersion_dff5885c2c873297,
                mid_getFormatVersionKey_11b109bd155ca898,
                mid_getRoot_11b109bd155ca898,
                mid_getTimeConverter_1a568e4d577ff0e8,
                mid_getVersion_dff5885c2c873297,
                mid_setContext_279465702b09ae7f,
                mid_writeFooter_6d745cf7b26e9f5d,
                mid_writeHeader_48090222d5fb583c,
                mid_writeSegment_6a1f0a7164a88e0a,
                mid_writeSegmentContent_a4679b5cde76d825,
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
