#ifndef org_orekit_files_ccsds_ndm_adm_aem_StreamingAemWriter$SegmentWriter_H
#define org_orekit_files_ccsds_ndm_adm_aem_StreamingAemWriter$SegmentWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              class StreamingAemWriter;
            }
          }
        }
      }
    }
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              class StreamingAemWriter$SegmentWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_93fe4dcc8115e7b3,
                  mid_finish_8655761ebf04b503,
                  mid_handleStep_8655761ebf04b503,
                  mid_init_a423d7aa7c2fe850,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingAemWriter$SegmentWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingAemWriter$SegmentWriter(const StreamingAemWriter$SegmentWriter& obj) : ::java::lang::Object(obj) {}

                StreamingAemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::StreamingAemWriter &);

                void finish(const ::org::orekit::propagation::SpacecraftState &) const;
                void handleStep(const ::org::orekit::propagation::SpacecraftState &) const;
                void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              };
            }
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
            namespace aem {
              extern PyType_Def PY_TYPE_DEF(StreamingAemWriter$SegmentWriter);
              extern PyTypeObject *PY_TYPE(StreamingAemWriter$SegmentWriter);

              class t_StreamingAemWriter$SegmentWriter {
              public:
                PyObject_HEAD
                StreamingAemWriter$SegmentWriter object;
                static PyObject *wrap_Object(const StreamingAemWriter$SegmentWriter&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
