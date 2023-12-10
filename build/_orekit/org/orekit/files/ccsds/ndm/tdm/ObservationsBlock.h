#ifndef org_orekit_files_ccsds_ndm_tdm_ObservationsBlock_H
#define org_orekit_files_ccsds_ndm_tdm_ObservationsBlock_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
namespace java {
  namespace util {
    class List;
  }
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
          namespace tdm {

            class ObservationsBlock : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_0fa09c18fee449d5,
                mid_addObservation_cd94b1e055e4d212,
                mid_addObservation_2d550fb141a705f2,
                mid_getObservations_2afa36052df4765d,
                mid_setObservations_de3e021e7266b71e,
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
