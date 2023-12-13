#ifndef org_orekit_files_ccsds_ndm_AbstractBuilder_H
#define org_orekit_files_ccsds_ndm_AbstractBuilder_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class IERSConventions;
    }
    namespace data {
      class DataContext;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          class AbstractBuilder;
          namespace tdm {
            class RangeUnitsConverter;
          }
        }
      }
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
              mid_getConventions_53aaf70620a914af,
              mid_getDataContext_687c2d3d1010744e,
              mid_getEquatorialRadius_b74f83833fdad017,
              mid_getFlattening_b74f83833fdad017,
              mid_getMissionReferenceDate_c325492395d89b24,
              mid_getRangeUnitsConverter_ce12ce9d5e127af0,
              mid_withConventions_e66e90f092f54749,
              mid_withDataContext_2b737343ef414e9f,
              mid_withEquatorialRadius_27ee8f6686f6a70c,
              mid_withFlattening_27ee8f6686f6a70c,
              mid_withMissionReferenceDate_1338a9afeffd1e7f,
              mid_withRangeUnitsConverter_c953e87b26d66be0,
              mid_create_c9fe7425468bb64c,
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
