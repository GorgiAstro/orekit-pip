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
                mid_init$_a1fa5dae97ea5ed2,
                mid_addObservation_c0e245b0a20c5c20,
                mid_addObservation_bf796995512911ef,
                mid_getObservations_e62d3bb06d56d7e3,
                mid_setObservations_0e7c3032c7c93ed3,
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
