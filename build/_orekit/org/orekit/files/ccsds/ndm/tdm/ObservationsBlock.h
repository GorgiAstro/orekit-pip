#ifndef org_orekit_files_ccsds_ndm_tdm_ObservationsBlock_H
#define org_orekit_files_ccsds_ndm_tdm_ObservationsBlock_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class Observation;
            class ObservationType;
          }
        }
        namespace section {
          class Data;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class ObservationsBlock : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_7ae3461a92a43152,
                mid_addObservation_e13ef2e2ed1f9373,
                mid_addObservation_07829ca5e164764b,
                mid_getObservations_a6156df500549a58,
                mid_setObservations_65de9727799c5641,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ObservationsBlock(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ObservationsBlock(const ObservationsBlock& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              ObservationsBlock();

              void addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation &) const;
              void addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType &, const ::org::orekit::time::AbsoluteDate &, jdouble) const;
              ::java::util::List getObservations() const;
              void setObservations(const ::java::util::List &) const;
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
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(ObservationsBlock);
            extern PyTypeObject *PY_TYPE(ObservationsBlock);

            class t_ObservationsBlock {
            public:
              PyObject_HEAD
              ObservationsBlock object;
              static PyObject *wrap_Object(const ObservationsBlock&);
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

#endif
