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
                mid_init$_0640e6acf969ed28,
                mid_addObservation_d2ff22efb71e3f1e,
                mid_addObservation_f1cf86cd74f431e1,
                mid_getObservations_0d9551367f7ecdef,
                mid_setObservations_4ccaedadb068bdeb,
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
