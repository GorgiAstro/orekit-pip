#ifndef org_orekit_files_ccsds_ndm_odm_oem_StreamingOemWriter$SegmentWriter_H
#define org_orekit_files_ccsds_ndm_odm_oem_StreamingOemWriter$SegmentWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {
              class StreamingOemWriter;
            }
          }
        }
      }
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
          namespace odm {
            namespace oem {

              class StreamingOemWriter$SegmentWriter : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_bd16966dd0e9a873,
                  mid_finish_72b846eb87f3af9a,
                  mid_handleStep_72b846eb87f3af9a,
                  mid_init_c410ce24bfc8448e,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit StreamingOemWriter$SegmentWriter(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                StreamingOemWriter$SegmentWriter(const StreamingOemWriter$SegmentWriter& obj) : ::java::lang::Object(obj) {}

                StreamingOemWriter$SegmentWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::StreamingOemWriter &);

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
          namespace odm {
            namespace oem {
              extern PyType_Def PY_TYPE_DEF(StreamingOemWriter$SegmentWriter);
              extern PyTypeObject *PY_TYPE(StreamingOemWriter$SegmentWriter);

              class t_StreamingOemWriter$SegmentWriter {
              public:
                PyObject_HEAD
                StreamingOemWriter$SegmentWriter object;
                static PyObject *wrap_Object(const StreamingOemWriter$SegmentWriter&);
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
