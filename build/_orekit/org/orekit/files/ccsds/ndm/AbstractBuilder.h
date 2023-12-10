#ifndef org_orekit_files_ccsds_ndm_AbstractBuilder_H
#define org_orekit_files_ccsds_ndm_AbstractBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class RangeUnitsConverter;
          }
          class AbstractBuilder;
        }
      }
    }
    namespace data {
      class DataContext;
    }
    namespace utils {
      class IERSConventions;
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

          class AbstractBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_getConventions_60f9ded87ab7ca4c,
              mid_getDataContext_0b7cf48ee6a922ee,
              mid_getEquatorialRadius_dff5885c2c873297,
              mid_getFlattening_dff5885c2c873297,
              mid_getMissionReferenceDate_85703d13e302437e,
              mid_getRangeUnitsConverter_ce2b21d91cfcb6bd,
              mid_withConventions_c41393f9593112cc,
              mid_withDataContext_c1f7b3ad887fbffd,
              mid_withEquatorialRadius_b764e0c530a10809,
              mid_withFlattening_b764e0c530a10809,
              mid_withMissionReferenceDate_0c67bdd3ec905004,
              mid_withRangeUnitsConverter_b77f4525fccbf560,
              mid_create_56bdb47287753acf,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractBuilder(const AbstractBuilder& obj) : ::java::lang::Object(obj) {}

            ::org::orekit::utils::IERSConventions getConventions() const;
            ::org::orekit::data::DataContext getDataContext() const;
            jdouble getEquatorialRadius() const;
            jdouble getFlattening() const;
            ::org::orekit::time::AbsoluteDate getMissionReferenceDate() const;
            ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter getRangeUnitsConverter() const;
            AbstractBuilder withConventions(const ::org::orekit::utils::IERSConventions &) const;
            AbstractBuilder withDataContext(const ::org::orekit::data::DataContext &) const;
            AbstractBuilder withEquatorialRadius(jdouble) const;
            AbstractBuilder withFlattening(jdouble) const;
            AbstractBuilder withMissionReferenceDate(const ::org::orekit::time::AbsoluteDate &) const;
            AbstractBuilder withRangeUnitsConverter(const ::org::orekit::files::ccsds::ndm::tdm::RangeUnitsConverter &) const;
          };
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
          extern PyType_Def PY_TYPE_DEF(AbstractBuilder);
          extern PyTypeObject *PY_TYPE(AbstractBuilder);

          class t_AbstractBuilder {
          public:
            PyObject_HEAD
            AbstractBuilder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_AbstractBuilder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const AbstractBuilder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const AbstractBuilder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
