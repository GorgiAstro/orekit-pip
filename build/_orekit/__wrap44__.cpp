#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *AbstractSingleFrequencyCombination::mids$ = NULL;
          bool AbstractSingleFrequencyCombination::live$ = false;

          jclass AbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_12b3dc80befaeb6c] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_74c648c2fd092da1] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_99e3200dafc19573] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_12b3dc80befaeb6c], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_74c648c2fd092da1], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractSingleFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self);
          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractSingleFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractSingleFrequencyCombination, t_AbstractSingleFrequencyCombination, AbstractSingleFrequencyCombination);

          void t_AbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractSingleFrequencyCombination), &PY_TYPE_DEF(AbstractSingleFrequencyCombination), module, "AbstractSingleFrequencyCombination", 0);
          }

          void t_AbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "class_", make_descriptor(AbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractSingleFrequencyCombination::wrap_Object(AbstractSingleFrequencyCombination(((t_AbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/FieldODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *FieldODEIntegratorBuilder::class$ = NULL;
        jmethodID *FieldODEIntegratorBuilder::mids$ = NULL;
        bool FieldODEIntegratorBuilder::live$ = false;

        jclass FieldODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/FieldODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_95fca721ff63137c] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");
            mids$[mid_buildIntegrator_ce58c6ef4cfb23c4] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_95fca721ff63137c], a0.this$, a1.this$));
        }

        ::org::hipparchus::ode::AbstractFieldIntegrator FieldODEIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_ce58c6ef4cfb23c4], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {
        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args);
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_FieldODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_FieldODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEIntegratorBuilder, t_FieldODEIntegratorBuilder, FieldODEIntegratorBuilder);
        PyObject *t_FieldODEIntegratorBuilder::wrap_Object(const FieldODEIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEIntegratorBuilder *self = (t_FieldODEIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEIntegratorBuilder), &PY_TYPE_DEF(FieldODEIntegratorBuilder), module, "FieldODEIntegratorBuilder", 0);
        }

        void t_FieldODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "class_", make_descriptor(FieldODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "wrapfn_", make_descriptor(t_FieldODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_FieldODEIntegratorBuilder::wrap_Object(FieldODEIntegratorBuilder(((t_FieldODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_FieldODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEIntegratorBuilder_of_(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEIntegratorBuilder_buildIntegrator(t_FieldODEIntegratorBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::OrbitType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
                return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
        static PyObject *t_FieldODEIntegratorBuilder_get__parameters_(t_FieldODEIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Apm::class$ = NULL;
              jmethodID *Apm::mids$ = NULL;
              bool Apm::live$ = false;
              ::java::lang::String *Apm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Apm::ROOT = NULL;

              jclass Apm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Apm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9603b9963356e980] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAttitude_0aeff0f42eb90e75] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getData_4a6a5b4c1dc4980d] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmData;");
                  mids$[mid_getMetadata_ced3497936df7291] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Apm::Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_9603b9963356e980, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::attitudes::Attitude Apm::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_0aeff0f42eb90e75], a0.this$, a1.this$));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmData Apm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmData(env->callObjectMethod(this$, mids$[mid_getData_4a6a5b4c1dc4980d]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata Apm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_ced3497936df7291]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args);
              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args);
              static PyObject *t_Apm_getData(t_Apm *self);
              static PyObject *t_Apm_getMetadata(t_Apm *self);
              static PyObject *t_Apm_get__data(t_Apm *self, void *data);
              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data);
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data);
              static PyGetSetDef t_Apm__fields_[] = {
                DECLARE_GET_FIELD(t_Apm, data),
                DECLARE_GET_FIELD(t_Apm, metadata),
                DECLARE_GET_FIELD(t_Apm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Apm__methods_[] = {
                DECLARE_METHOD(t_Apm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Apm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Apm)[] = {
                { Py_tp_methods, t_Apm__methods_ },
                { Py_tp_init, (void *) t_Apm_init_ },
                { Py_tp_getset, t_Apm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Apm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Apm, t_Apm, Apm);
              PyObject *t_Apm::wrap_Object(const Apm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Apm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Apm::install(PyObject *module)
              {
                installType(&PY_TYPE(Apm), &PY_TYPE_DEF(Apm), module, "Apm", 0);
              }

              void t_Apm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "class_", make_descriptor(Apm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "wrapfn_", make_descriptor(t_Apm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Apm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Apm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "ROOT", make_descriptor(j2p(*Apm::ROOT)));
              }

              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Apm::initializeClass, 1)))
                  return NULL;
                return t_Apm::wrap_Object(Apm(((t_Apm *) arg)->object.this$));
              }
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Apm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Apm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Apm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args)
              {
                ::org::orekit::frames::Frame a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::attitudes::Attitude result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getAttitude(a0, a1));
                  return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
                return NULL;
              }

              static PyObject *t_Apm_getData(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(result);
              }

              static PyObject *t_Apm_getMetadata(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(result);
              }
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Apm_get__data(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(value);
              }

              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider$InvalidPVProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider$InvalidPVProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider$InvalidPVProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider$InvalidPVProvider::AggregatedPVCoordinatesProvider$InvalidPVProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider$InvalidPVProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args);

      static PyMethodDef t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider$InvalidPVProvider, getPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider$InvalidPVProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider$InvalidPVProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider, t_AggregatedPVCoordinatesProvider$InvalidPVProvider, AggregatedPVCoordinatesProvider$InvalidPVProvider);

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider), module, "AggregatedPVCoordinatesProvider$InvalidPVProvider", 0);
      }

      void t_AggregatedPVCoordinatesProvider$InvalidPVProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider$InvalidPVProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider$InvalidPVProvider::wrap_Object(AggregatedPVCoordinatesProvider$InvalidPVProvider(((t_AggregatedPVCoordinatesProvider$InvalidPVProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider$InvalidPVProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider$InvalidPVProvider_init_(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args, PyObject *kwds)
      {
        AggregatedPVCoordinatesProvider$InvalidPVProvider object((jobject) NULL);

        INT_CALL(object = AggregatedPVCoordinatesProvider$InvalidPVProvider());
        self->object = object;

        return 0;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider$InvalidPVProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider$InvalidPVProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/EGMFormatReader.h"
#include "java/io/InputStream.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *EGMFormatReader::class$ = NULL;
          jmethodID *EGMFormatReader::mids$ = NULL;
          bool EGMFormatReader::live$ = false;

          jclass EGMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/EGMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_76cf8b957ccb7ae1] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_a7a407bb40e36523] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZZ)V");
              mids$[mid_getProvider_752316a4c911183b] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_76cf8b957ccb7ae1, a0.this$, a1)) {}

          EGMFormatReader::EGMFormatReader(const ::java::lang::String & a0, jboolean a1, jboolean a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_a7a407bb40e36523, a0.this$, a1, a2)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider EGMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_752316a4c911183b], a0, a1, a2));
          }

          void EGMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args);
          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args);

          static PyMethodDef t_EGMFormatReader__methods_[] = {
            DECLARE_METHOD(t_EGMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EGMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_EGMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EGMFormatReader)[] = {
            { Py_tp_methods, t_EGMFormatReader__methods_ },
            { Py_tp_init, (void *) t_EGMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EGMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(EGMFormatReader, t_EGMFormatReader, EGMFormatReader);

          void t_EGMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(EGMFormatReader), &PY_TYPE_DEF(EGMFormatReader), module, "EGMFormatReader", 0);
          }

          void t_EGMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "class_", make_descriptor(EGMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "wrapfn_", make_descriptor(t_EGMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EGMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EGMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EGMFormatReader::initializeClass, 1)))
              return NULL;
            return t_EGMFormatReader::wrap_Object(EGMFormatReader(((t_EGMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_EGMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EGMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EGMFormatReader_init_(t_EGMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                jboolean a2;
                EGMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZZ", &a0, &a1, &a2))
                {
                  INT_CALL(object = EGMFormatReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EGMFormatReader_getProvider(t_EGMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_EGMFormatReader_loadData(t_EGMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(EGMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBody::class$ = NULL;
      jmethodID *PythonCelestialBody::mids$ = NULL;
      bool PythonCelestialBody::live$ = false;

      jclass PythonCelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyOrientedFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_b74f83833fdad017] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_toFieldPVCoordinatesProvider_9516b47d48320472] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBody::PythonCelestialBody() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonCelestialBody::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonCelestialBody::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonCelestialBody::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self);
      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data);
      static PyGetSetDef t_PythonCelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBody, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBody__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBody, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBody)[] = {
        { Py_tp_methods, t_PythonCelestialBody__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBody_init_ },
        { Py_tp_getset, t_PythonCelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBody)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBody, t_PythonCelestialBody, PythonCelestialBody);

      void t_PythonCelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBody), &PY_TYPE_DEF(PythonCelestialBody), module, "PythonCelestialBody", 1);
      }

      void t_PythonCelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "class_", make_descriptor(PythonCelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "wrapfn_", make_descriptor(t_PythonCelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBody::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getBodyOrientedFrame0 },
          { "getGM", "()D", (void *) t_PythonCelestialBody_getGM1 },
          { "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getInertiallyOrientedFrame2 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonCelestialBody_getName3 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates4 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates5 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBody_pythonDecRef6 },
          { "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;", (void *) t_PythonCelestialBody_toFieldPVCoordinatesProvider7 },
        };
        env->registerNatives(cls, methods, 8);
      }

      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBody::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBody::wrap_Object(PythonCelestialBody(((t_PythonCelestialBody *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBody object((jobject) NULL);

        INT_CALL(object = PythonCelestialBody());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyOrientedFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getGM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getGM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInertiallyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getInertiallyOrientedFrame", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "toFieldPVCoordinatesProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, &value))
        {
          throwTypeError("toFieldPVCoordinatesProvider", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Power.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Power::class$ = NULL;
        jmethodID *Power::mids$ = NULL;
        bool Power::live$ = false;

        jclass Power::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Power");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Power::Power(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        jdouble Power::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Power::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Power_value(t_Power *self, PyObject *args);

        static PyMethodDef t_Power__methods_[] = {
          DECLARE_METHOD(t_Power, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Power, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Power)[] = {
          { Py_tp_methods, t_Power__methods_ },
          { Py_tp_init, (void *) t_Power_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Power)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Power, t_Power, Power);

        void t_Power::install(PyObject *module)
        {
          installType(&PY_TYPE(Power), &PY_TYPE_DEF(Power), module, "Power", 0);
        }

        void t_Power::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "class_", make_descriptor(Power::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "wrapfn_", make_descriptor(t_Power::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Power), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Power_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Power::initializeClass, 1)))
            return NULL;
          return t_Power::wrap_Object(Power(((t_Power *) arg)->object.this$));
        }
        static PyObject *t_Power_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Power::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Power_init_(t_Power *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Power object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Power(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Power_value(t_Power *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CR3BPSystem::class$ = NULL;
      jmethodID *CR3BPSystem::mids$ = NULL;
      bool CR3BPSystem::live$ = false;

      jclass CR3BPSystem::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CR3BPSystem");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1b562bc47b00844a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;D)V");
          mids$[mid_init$_50e610073feca062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;DD)V");
          mids$[mid_getDdim_b74f83833fdad017] = env->getMethodID(cls, "getDdim", "()D");
          mids$[mid_getGamma_ba8242c61ee7476d] = env->getMethodID(cls, "getGamma", "(Lorg/orekit/utils/LagrangianPoints;)D");
          mids$[mid_getLPosition_77c4fd1d0b7adeef] = env->getMethodID(cls, "getLPosition", "(Lorg/orekit/utils/LagrangianPoints;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMassRatio_b74f83833fdad017] = env->getMethodID(cls, "getMassRatio", "()D");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPrimary_5df52e80cbb5eb85] = env->getMethodID(cls, "getPrimary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getRealAPV_7ffc15c037673c00] = env->getMethodID(cls, "getRealAPV", "(Lorg/orekit/utils/AbsolutePVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_getRotatingFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getRotatingFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getSecondary_5df52e80cbb5eb85] = env->getMethodID(cls, "getSecondary", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getTdim_b74f83833fdad017] = env->getMethodID(cls, "getTdim", "()D");
          mids$[mid_getVdim_b74f83833fdad017] = env->getMethodID(cls, "getVdim", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b562bc47b00844a, a0.this$, a1.this$, a2)) {}

      CR3BPSystem::CR3BPSystem(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50e610073feca062, a0.this$, a1.this$, a2, a3)) {}

      jdouble CR3BPSystem::getDdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdim_b74f83833fdad017]);
      }

      jdouble CR3BPSystem::getGamma(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_ba8242c61ee7476d], a0.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D CR3BPSystem::getLPosition(const ::org::orekit::utils::LagrangianPoints & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLPosition_77c4fd1d0b7adeef], a0.this$));
      }

      jdouble CR3BPSystem::getMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMassRatio_b74f83833fdad017]);
      }

      ::java::lang::String CR3BPSystem::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getPrimary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPrimary_5df52e80cbb5eb85]));
      }

      ::org::orekit::utils::AbsolutePVCoordinates CR3BPSystem::getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getRealAPV_7ffc15c037673c00], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame CR3BPSystem::getRotatingFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRotatingFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::bodies::CelestialBody CR3BPSystem::getSecondary() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSecondary_5df52e80cbb5eb85]));
      }

      jdouble CR3BPSystem::getTdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdim_b74f83833fdad017]);
      }

      jdouble CR3BPSystem::getVdim() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdim_b74f83833fdad017]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg);
      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args);
      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self);
      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data);
      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data);
      static PyGetSetDef t_CR3BPSystem__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPSystem, ddim),
        DECLARE_GET_FIELD(t_CR3BPSystem, massRatio),
        DECLARE_GET_FIELD(t_CR3BPSystem, name),
        DECLARE_GET_FIELD(t_CR3BPSystem, primary),
        DECLARE_GET_FIELD(t_CR3BPSystem, rotatingFrame),
        DECLARE_GET_FIELD(t_CR3BPSystem, secondary),
        DECLARE_GET_FIELD(t_CR3BPSystem, tdim),
        DECLARE_GET_FIELD(t_CR3BPSystem, vdim),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPSystem__methods_[] = {
        DECLARE_METHOD(t_CR3BPSystem, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPSystem, getDdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getGamma, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getLPosition, METH_O),
        DECLARE_METHOD(t_CR3BPSystem, getMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getName, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRealAPV, METH_VARARGS),
        DECLARE_METHOD(t_CR3BPSystem, getRotatingFrame, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getSecondary, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getTdim, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPSystem, getVdim, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPSystem)[] = {
        { Py_tp_methods, t_CR3BPSystem__methods_ },
        { Py_tp_init, (void *) t_CR3BPSystem_init_ },
        { Py_tp_getset, t_CR3BPSystem__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPSystem)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPSystem, t_CR3BPSystem, CR3BPSystem);

      void t_CR3BPSystem::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPSystem), &PY_TYPE_DEF(CR3BPSystem), module, "CR3BPSystem", 0);
      }

      void t_CR3BPSystem::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "class_", make_descriptor(CR3BPSystem::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "wrapfn_", make_descriptor(t_CR3BPSystem::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPSystem), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPSystem_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPSystem::initializeClass, 1)))
          return NULL;
        return t_CR3BPSystem::wrap_Object(CR3BPSystem(((t_CR3BPSystem *) arg)->object.this$));
      }
      static PyObject *t_CR3BPSystem_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPSystem::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPSystem_init_(t_CR3BPSystem *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
            ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            CR3BPSystem object((jobject) NULL);

            if (!parseArgs(args, "kkDD", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CR3BPSystem(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CR3BPSystem_getDdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getGamma(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getGamma(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGamma", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getLPosition(t_CR3BPSystem *self, PyObject *arg)
      {
        ::org::orekit::utils::LagrangianPoints a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::utils::LagrangianPoints::initializeClass, &a0, &p0, ::org::orekit::utils::t_LagrangianPoints::parameters_))
        {
          OBJ_CALL(result = self->object.getLPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLPosition", arg);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getMassRatio(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getName(t_CR3BPSystem *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CR3BPSystem_getPrimary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getRealAPV(t_CR3BPSystem *self, PyObject *args)
      {
        ::org::orekit::utils::AbsolutePVCoordinates a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::frames::Frame a2((jobject) NULL);
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getRealAPV(a0, a1, a2));
          return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRealAPV", args);
        return NULL;
      }

      static PyObject *t_CR3BPSystem_getRotatingFrame(t_CR3BPSystem *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getSecondary(t_CR3BPSystem *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CR3BPSystem_getTdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_getVdim(t_CR3BPSystem *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdim());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPSystem_get__ddim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__massRatio(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__name(t_CR3BPSystem *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_CR3BPSystem_get__primary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__rotatingFrame(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotatingFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__secondary(t_CR3BPSystem *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSecondary());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CR3BPSystem_get__tdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdim());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CR3BPSystem_get__vdim(t_CR3BPSystem *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdim());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractFieldIntegrator::class$ = NULL;
      jmethodID *AbstractFieldIntegrator::mids$ = NULL;
      bool AbstractFieldIntegrator::live$ = false;

      jclass AbstractFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_7d036dd73a796a18] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_c7e835482ba4bd87] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_cd46d1493dfc3830] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_94164e01c2f25701] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCurrentSignedStepsize_81520b552cb3fa26] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_e62d3bb06d56d7e3] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_b7aa8b39e4b21836] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_44ed599e93e8a30c] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_getStepSize_81520b552cb3fa26] = env->getMethodID(cls, "getStepSize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_sanityChecks_c09b0b0bdb27b138] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initIntegration_75ca69013be095d1] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setStepStart_5b8144cf9ccecc03] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_fcb96c98de6fad04] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_acceptStep_73c18c8e96bca501] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_isLastStep_9ab94ac1dc23b105] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_9ab94ac1dc23b105] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_setStepSize_f2b4bfa0af1007e8] = env->getMethodID(cls, "setStepSize", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getEvaluationsCounter_3c86b06a86576583] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_getEquations_982634fbb2e5d3cb] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/FieldExpandableODE;");
          mids$[mid_setStateInitialized_fcb96c98de6fad04] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractFieldIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_7d036dd73a796a18], a0.this$);
      }

      void AbstractFieldIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_c7e835482ba4bd87], a0.this$);
      }

      void AbstractFieldIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_cd46d1493dfc3830], a0.this$);
      }

      void AbstractFieldIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_a1fa5dae97ea5ed2]);
      }

      void AbstractFieldIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_a1fa5dae97ea5ed2]);
      }

      void AbstractFieldIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_a1fa5dae97ea5ed2]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > AbstractFieldIntegrator::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_94164e01c2f25701], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_81520b552cb3fa26]));
      }

      jint AbstractFieldIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
      }

      ::java::util::List AbstractFieldIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::Field AbstractFieldIntegrator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      jint AbstractFieldIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
      }

      ::java::lang::String AbstractFieldIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_e62d3bb06d56d7e3]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_e62d3bb06d56d7e3]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_b7aa8b39e4b21836]));
      }

      void AbstractFieldIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_44ed599e93e8a30c], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data);
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data);
      static PyGetSetDef t_AbstractFieldIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, eventDetectors),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, field),
        DECLARE_GETSET_FIELD(t_AbstractFieldIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepStart),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegrator)[] = {
        { Py_tp_methods, t_AbstractFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldIntegrator, t_AbstractFieldIntegrator, AbstractFieldIntegrator);
      PyObject *t_AbstractFieldIntegrator::wrap_Object(const AbstractFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldIntegrator), &PY_TYPE_DEF(AbstractFieldIntegrator), module, "AbstractFieldIntegrator", 0);
      }

      void t_AbstractFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "class_", make_descriptor(AbstractFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "wrapfn_", make_descriptor(t_AbstractFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldIntegrator::wrap_Object(AbstractFieldIntegrator(((t_AbstractFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEclipseDetector::class$ = NULL;
        jmethodID *FieldEclipseDetector::mids$ = NULL;
        bool FieldEclipseDetector::live$ = false;

        jclass FieldEclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3979746d0d706f9d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_fc567f1ee9fa3873] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMargin_81520b552cb3fa26] = env->getMethodID(cls, "getMargin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOccultationEngine_cf1cac2b0ace2d84] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_9ab94ac1dc23b105] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_1023bd88f375494d] = env->getMethodID(cls, "withMargin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withPenumbra_44191736a65d260e] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withUmbra_44191736a65d260e] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_create_51c949e45e1de493] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::OccultationEngine & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3979746d0d706f9d, a0.this$, a1.this$)) {}

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_fc567f1ee9fa3873, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::getMargin() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMargin_81520b552cb3fa26]));
        }

        ::org::orekit::utils::OccultationEngine FieldEclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_cf1cac2b0ace2d84]));
        }

        jboolean FieldEclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_9ab94ac1dc23b105]);
        }

        FieldEclipseDetector FieldEclipseDetector::withMargin(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_1023bd88f375494d], a0.this$));
        }

        FieldEclipseDetector FieldEclipseDetector::withPenumbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_44191736a65d260e]));
        }

        FieldEclipseDetector FieldEclipseDetector::withUmbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_44191736a65d260e]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args);
        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args);
        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data);
        static PyGetSetDef t_FieldEclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEclipseDetector, margin),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEclipseDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_FieldEclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEclipseDetector)[] = {
          { Py_tp_methods, t_FieldEclipseDetector__methods_ },
          { Py_tp_init, (void *) t_FieldEclipseDetector_init_ },
          { Py_tp_getset, t_FieldEclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEclipseDetector, t_FieldEclipseDetector, FieldEclipseDetector);
        PyObject *t_FieldEclipseDetector::wrap_Object(const FieldEclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEclipseDetector), &PY_TYPE_DEF(FieldEclipseDetector), module, "FieldEclipseDetector", 0);
        }

        void t_FieldEclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "class_", make_descriptor(FieldEclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "wrapfn_", make_descriptor(t_FieldEclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEclipseDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEclipseDetector::wrap_Object(FieldEclipseDetector(((t_FieldEclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::OccultationEngine a1((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::OccultationEngine::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "KkDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMargin());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMargin());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DateConsumer::class$ = NULL;
            jmethodID *ParseToken$DateConsumer::mids$ = NULL;
            bool ParseToken$DateConsumer::live$ = false;

            jclass ParseToken$DateConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_02135a6ef25adb4b] = env->getMethodID(cls, "accept", "(Lorg/orekit/time/AbsoluteDate;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DateConsumer::accept(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_02135a6ef25adb4b], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DateConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DateConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DateConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DateConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DateConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DateConsumer, t_ParseToken$DateConsumer, ParseToken$DateConsumer);

            void t_ParseToken$DateConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DateConsumer), &PY_TYPE_DEF(ParseToken$DateConsumer), module, "ParseToken$DateConsumer", 0);
            }

            void t_ParseToken$DateConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "class_", make_descriptor(ParseToken$DateConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "wrapfn_", make_descriptor(t_ParseToken$DateConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DateConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DateConsumer::wrap_Object(ParseToken$DateConsumer(((t_ParseToken$DateConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DateConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Min.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Min::class$ = NULL;
        jmethodID *Min::mids$ = NULL;
        bool Min::live$ = false;

        jclass Min::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Min");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Min::Min() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Min::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Min_value(t_Min *self, PyObject *args);

        static PyMethodDef t_Min__methods_[] = {
          DECLARE_METHOD(t_Min, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Min, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Min)[] = {
          { Py_tp_methods, t_Min__methods_ },
          { Py_tp_init, (void *) t_Min_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Min)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Min, t_Min, Min);

        void t_Min::install(PyObject *module)
        {
          installType(&PY_TYPE(Min), &PY_TYPE_DEF(Min), module, "Min", 0);
        }

        void t_Min::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "class_", make_descriptor(Min::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "wrapfn_", make_descriptor(t_Min::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Min), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Min_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Min::initializeClass, 1)))
            return NULL;
          return t_Min::wrap_Object(Min(((t_Min *) arg)->object.this$));
        }
        static PyObject *t_Min_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Min::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Min_init_(t_Min *self, PyObject *args, PyObject *kwds)
        {
          Min object((jobject) NULL);

          INT_CALL(object = Min());
          self->object = object;

          return 0;
        }

        static PyObject *t_Min_value(t_Min *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenThirdBodyLinear::class$ = NULL;
              jmethodID *HansenThirdBodyLinear::mids$ = NULL;
              bool HansenThirdBodyLinear::live$ = false;

              jclass HansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_3313c75e3e16c428] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_b5167f35b2521627] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_98e10c261c066ee7] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_98e10c261c066ee7] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenThirdBodyLinear::HansenThirdBodyLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3313c75e3e16c428, a0, a1)) {}

              void HansenThirdBodyLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_b5167f35b2521627], a0, a1, a2);
              }

              jdouble HansenThirdBodyLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_98e10c261c066ee7], a0, a1);
              }

              jdouble HansenThirdBodyLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_98e10c261c066ee7], a0, a1);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args);

              static PyMethodDef t_HansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_HansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_HansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_HansenThirdBodyLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenThirdBodyLinear, t_HansenThirdBodyLinear, HansenThirdBodyLinear);

              void t_HansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenThirdBodyLinear), &PY_TYPE_DEF(HansenThirdBodyLinear), module, "HansenThirdBodyLinear", 0);
              }

              void t_HansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "class_", make_descriptor(HansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "wrapfn_", make_descriptor(t_HansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenThirdBodyLinear::wrap_Object(HansenThirdBodyLinear(((t_HansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenThirdBodyLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateTroposphericDelayModifier::live$ = false;

          jclass BaseRangeRateTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeRateErrorTroposphericModel_b8971448fff75978] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeRateErrorTroposphericModel_9a2cbda6eb51ddd8] = env->getMethodID(cls, "rangeRateErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_3c029eb579d11318] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          jdouble BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_b8971448fff75978], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeRateTroposphericDelayModifier::rangeRateErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeRateErrorTroposphericModel_9a2cbda6eb51ddd8], a0.this$, a1.this$, a2.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeRateTroposphericDelayModifier, rangeRateErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateTroposphericDelayModifier, t_BaseRangeRateTroposphericDelayModifier, BaseRangeRateTroposphericDelayModifier);

          void t_BaseRangeRateTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateTroposphericDelayModifier), module, "BaseRangeRateTroposphericDelayModifier", 0);
          }

          void t_BaseRangeRateTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "class_", make_descriptor(BaseRangeRateTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateTroposphericDelayModifier::wrap_Object(BaseRangeRateTroposphericDelayModifier(((t_BaseRangeRateTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_getParametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_rangeRateErrorTroposphericModel(t_BaseRangeRateTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeRateErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeRateErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeRateTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeRateTroposphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Control3DVectorCostType::class$ = NULL;
        jmethodID *Control3DVectorCostType::mids$ = NULL;
        bool Control3DVectorCostType::live$ = false;
        Control3DVectorCostType *Control3DVectorCostType::INF_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::NONE = NULL;
        Control3DVectorCostType *Control3DVectorCostType::ONE_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::TWO_NORM = NULL;

        jclass Control3DVectorCostType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Control3DVectorCostType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_f475fa22e4944acc] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_f75a63670951da8a] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_valueOf_29696c228e5793fa] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_values_a36753d641c562a8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INF_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "INF_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            NONE = new Control3DVectorCostType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            ONE_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "ONE_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            TWO_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "TWO_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_f475fa22e4944acc], a0.this$));
        }

        jdouble Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_f75a63670951da8a], a0.this$);
        }

        Control3DVectorCostType Control3DVectorCostType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Control3DVectorCostType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_29696c228e5793fa], a0.this$));
        }

        JArray< Control3DVectorCostType > Control3DVectorCostType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Control3DVectorCostType >(env->callStaticObjectMethod(cls, mids$[mid_values_a36753d641c562a8]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type);
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data);
        static PyGetSetDef t_Control3DVectorCostType__fields_[] = {
          DECLARE_GET_FIELD(t_Control3DVectorCostType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Control3DVectorCostType__methods_[] = {
          DECLARE_METHOD(t_Control3DVectorCostType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, of_, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Control3DVectorCostType)[] = {
          { Py_tp_methods, t_Control3DVectorCostType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Control3DVectorCostType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Control3DVectorCostType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Control3DVectorCostType, t_Control3DVectorCostType, Control3DVectorCostType);
        PyObject *t_Control3DVectorCostType::wrap_Object(const Control3DVectorCostType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Control3DVectorCostType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Control3DVectorCostType::install(PyObject *module)
        {
          installType(&PY_TYPE(Control3DVectorCostType), &PY_TYPE_DEF(Control3DVectorCostType), module, "Control3DVectorCostType", 0);
        }

        void t_Control3DVectorCostType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "class_", make_descriptor(Control3DVectorCostType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "wrapfn_", make_descriptor(t_Control3DVectorCostType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "boxfn_", make_descriptor(boxObject));
          env->getClass(Control3DVectorCostType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "INF_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::INF_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "NONE", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "ONE_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::ONE_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "TWO_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::TWO_NORM)));
        }

        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Control3DVectorCostType::initializeClass, 1)))
            return NULL;
          return t_Control3DVectorCostType::wrap_Object(Control3DVectorCostType(((t_Control3DVectorCostType *) arg)->object.this$));
        }
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Control3DVectorCostType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Control3DVectorCostType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::valueOf(a0));
            return t_Control3DVectorCostType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type)
        {
          JArray< Control3DVectorCostType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::values());
          return JArray<jobject>(result.this$).wrap(t_Control3DVectorCostType::wrap_jobject);
        }
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Skewness.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Skewness::class$ = NULL;
          jmethodID *Skewness::mids$ = NULL;
          bool Skewness::live$ = false;

          jclass Skewness::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Skewness");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_595538d377a28bc6] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Skewness;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Skewness::Skewness() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Skewness::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Skewness Skewness::copy() const
          {
            return Skewness(env->callObjectMethod(this$, mids$[mid_copy_595538d377a28bc6]));
          }

          jdouble Skewness::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong Skewness::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Skewness::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Skewness::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args);
          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data);
          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data);
          static PyGetSetDef t_Skewness__fields_[] = {
            DECLARE_GET_FIELD(t_Skewness, n),
            DECLARE_GET_FIELD(t_Skewness, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Skewness__methods_[] = {
            DECLARE_METHOD(t_Skewness, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Skewness, clear, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, copy, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getN, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Skewness, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Skewness)[] = {
            { Py_tp_methods, t_Skewness__methods_ },
            { Py_tp_init, (void *) t_Skewness_init_ },
            { Py_tp_getset, t_Skewness__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Skewness)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Skewness, t_Skewness, Skewness);

          void t_Skewness::install(PyObject *module)
          {
            installType(&PY_TYPE(Skewness), &PY_TYPE_DEF(Skewness), module, "Skewness", 0);
          }

          void t_Skewness::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "class_", make_descriptor(Skewness::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "wrapfn_", make_descriptor(t_Skewness::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Skewness), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Skewness_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Skewness::initializeClass, 1)))
              return NULL;
            return t_Skewness::wrap_Object(Skewness(((t_Skewness *) arg)->object.this$));
          }
          static PyObject *t_Skewness_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Skewness::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Skewness_init_(t_Skewness *self, PyObject *args, PyObject *kwds)
          {
            Skewness object((jobject) NULL);

            INT_CALL(object = Skewness());
            self->object = object;

            return 0;
          }

          static PyObject *t_Skewness_clear(t_Skewness *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Skewness_copy(t_Skewness *self, PyObject *args)
          {
            Skewness result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Skewness::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Skewness_evaluate(t_Skewness *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Skewness_getN(t_Skewness *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Skewness_getResult(t_Skewness *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Skewness_increment(t_Skewness *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Skewness), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Skewness_get__n(t_Skewness *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Skewness_get__result(t_Skewness *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/sampling/AbstractODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *AbstractODEStateInterpolator::class$ = NULL;
        jmethodID *AbstractODEStateInterpolator::mids$ = NULL;
        bool AbstractODEStateInterpolator::live$ = false;

        jclass AbstractODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/AbstractODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_73a804ac72232dd7] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalCurrentState_73a804ac72232dd7] = env->getMethodID(cls, "getGlobalCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getGlobalPreviousState_73a804ac72232dd7] = env->getMethodID(cls, "getGlobalPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_cf0061d2765ae5a3] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_73a804ac72232dd7] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");
            mids$[mid_restrictStep_c30f3dfccffcc659] = env->getMethodID(cls, "restrictStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");
            mids$[mid_getMapper_d05a9ec8030c7103] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/EquationsMapper;");
            mids$[mid_computeInterpolatedStateAndDerivatives_95a6c58152853e22] = env->getMethodID(cls, "computeInterpolatedStateAndDerivatives", "(Lorg/hipparchus/ode/EquationsMapper;DDDD)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_create_39f312cb029323b1] = env->getMethodID(cls, "create", "(ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_73a804ac72232dd7]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalCurrentState_73a804ac72232dd7]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getGlobalPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getGlobalPreviousState_73a804ac72232dd7]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_cf0061d2765ae5a3], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative AbstractODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_73a804ac72232dd7]));
        }

        jboolean AbstractODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_9ab94ac1dc23b105]);
        }

        jboolean AbstractODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        jboolean AbstractODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_9ab94ac1dc23b105]);
        }

        AbstractODEStateInterpolator AbstractODEStateInterpolator::restrictStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, const ::org::hipparchus::ode::ODEStateAndDerivative & a1) const
        {
          return AbstractODEStateInterpolator(env->callObjectMethod(this$, mids$[mid_restrictStep_c30f3dfccffcc659], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self);
        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args);
        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data);
        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data);
        static PyGetSetDef t_AbstractODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalCurrentState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, globalPreviousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_AbstractODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_AbstractODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getGlobalPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_AbstractODEStateInterpolator, restrictStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractODEStateInterpolator)[] = {
          { Py_tp_methods, t_AbstractODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractODEStateInterpolator, t_AbstractODEStateInterpolator, AbstractODEStateInterpolator);

        void t_AbstractODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractODEStateInterpolator), &PY_TYPE_DEF(AbstractODEStateInterpolator), module, "AbstractODEStateInterpolator", 0);
        }

        void t_AbstractODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "class_", make_descriptor(AbstractODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "wrapfn_", make_descriptor(t_AbstractODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_AbstractODEStateInterpolator::wrap_Object(AbstractODEStateInterpolator(((t_AbstractODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AbstractODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractODEStateInterpolator_getCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalCurrentState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getGlobalPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_getInterpolatedState(t_AbstractODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_getPreviousState(t_AbstractODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isCurrentStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isForward(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_isPreviousStateInterpolated(t_AbstractODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractODEStateInterpolator_restrictStep(t_AbstractODEStateInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          ::org::hipparchus::ode::ODEStateAndDerivative a1((jobject) NULL);
          AbstractODEStateInterpolator result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.restrictStep(a0, a1));
            return t_AbstractODEStateInterpolator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "restrictStep", args);
          return NULL;
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__currentStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__forward(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalCurrentState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__globalPreviousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getGlobalPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousState(t_AbstractODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_AbstractODEStateInterpolator_get__previousStateInterpolated(t_AbstractODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmParser::class$ = NULL;
            jmethodID *CdmParser::mids$ = NULL;
            bool CdmParser::live$ = false;

            jclass CdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_ea99365c2f410abf] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/cdm/Cdm;");
                mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getHeader_46817a52d1a1f2b5] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;");
                mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::files::ccsds::ndm::cdm::Cdm CdmParser::build() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::Cdm(env->callObjectMethod(this$, mids$[mid_build_ea99365c2f410abf]));
            }

            jboolean CdmParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmHeader CdmParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_46817a52d1a1f2b5]));
            }

            jboolean CdmParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
            }

            jboolean CdmParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
            }

            void CdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args);
            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data);
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data);
            static PyGetSetDef t_CdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_CdmParser, header),
              DECLARE_GET_FIELD(t_CdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmParser__methods_[] = {
              DECLARE_METHOD(t_CdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, build, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, finalizeMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, getHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, inMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareData, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareHeader, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, prepareMetadata, METH_VARARGS),
              DECLARE_METHOD(t_CdmParser, reset, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmParser)[] = {
              { Py_tp_methods, t_CdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(CdmParser, t_CdmParser, CdmParser);
            PyObject *t_CdmParser::wrap_Object(const CdmParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_CdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_CdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmParser *self = (t_CdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_CdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmParser), &PY_TYPE_DEF(CdmParser), module, "CdmParser", 0);
            }

            void t_CdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "class_", make_descriptor(CdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "wrapfn_", make_descriptor(t_CdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmParser::initializeClass, 1)))
                return NULL;
              return t_CdmParser::wrap_Object(CdmParser(((t_CdmParser *) arg)->object.this$));
            }
            static PyObject *t_CdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmParser_of_(t_CdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmParser_build(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Cdm result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.build());
                return ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "build", args, 2);
            }

            static PyObject *t_CdmParser_finalizeData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeData", args, 2);
            }

            static PyObject *t_CdmParser_finalizeHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeHeader", args, 2);
            }

            static PyObject *t_CdmParser_finalizeMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.finalizeMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "finalizeMetadata", args, 2);
            }

            static PyObject *t_CdmParser_getHeader(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "getHeader", args, 2);
            }

            static PyObject *t_CdmParser_inData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inData", args, 2);
            }

            static PyObject *t_CdmParser_inHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inHeader", args, 2);
            }

            static PyObject *t_CdmParser_inMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.inMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "inMetadata", args, 2);
            }

            static PyObject *t_CdmParser_prepareData(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareData());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareData", args, 2);
            }

            static PyObject *t_CdmParser_prepareHeader(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareHeader());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareHeader", args, 2);
            }

            static PyObject *t_CdmParser_prepareMetadata(t_CdmParser *self, PyObject *args)
            {
              jboolean result;

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.prepareMetadata());
                Py_RETURN_BOOL(result);
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "prepareMetadata", args, 2);
            }

            static PyObject *t_CdmParser_reset(t_CdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
              {
                OBJ_CALL(self->object.reset(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CdmParser), (PyObject *) self, "reset", args, 2);
            }
            static PyObject *t_CdmParser_get__parameters_(t_CdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CdmParser_get__header(t_CdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBody::class$ = NULL;
      jmethodID *CelestialBody::mids$ = NULL;
      bool CelestialBody::live$ = false;

      jclass CelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyOrientedFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_b74f83833fdad017] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame CelestialBody::getBodyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyOrientedFrame_2c51111cc6894ba1]));
      }

      jdouble CelestialBody::getGM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGM_b74f83833fdad017]);
      }

      ::org::orekit::frames::Frame CelestialBody::getInertiallyOrientedFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertiallyOrientedFrame_2c51111cc6894ba1]));
      }

      ::java::lang::String CelestialBody::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self);
      static PyObject *t_CelestialBody_getName(t_CelestialBody *self);
      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data);
      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data);
      static PyGetSetDef t_CelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBody, bodyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, gM),
        DECLARE_GET_FIELD(t_CelestialBody, inertiallyOrientedFrame),
        DECLARE_GET_FIELD(t_CelestialBody, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBody__methods_[] = {
        DECLARE_METHOD(t_CelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBody, getBodyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getGM, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getInertiallyOrientedFrame, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBody, getName, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBody)[] = {
        { Py_tp_methods, t_CelestialBody__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBody)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(CelestialBody, t_CelestialBody, CelestialBody);

      void t_CelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBody), &PY_TYPE_DEF(CelestialBody), module, "CelestialBody", 0);
      }

      void t_CelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "class_", make_descriptor(CelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "wrapfn_", make_descriptor(t_CelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBody), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBody::initializeClass, 1)))
          return NULL;
        return t_CelestialBody::wrap_Object(CelestialBody(((t_CelestialBody *) arg)->object.this$));
      }
      static PyObject *t_CelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBody_getBodyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getGM(t_CelestialBody *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CelestialBody_getInertiallyOrientedFrame(t_CelestialBody *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_CelestialBody_getName(t_CelestialBody *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_CelestialBody_get__bodyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__gM(t_CelestialBody *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CelestialBody_get__inertiallyOrientedFrame(t_CelestialBody *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiallyOrientedFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_CelestialBody_get__name(t_CelestialBody *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/Stream.h"
#include "java/util/function/Supplier.h"
#include "java/util/Comparator.h"
#include "java/util/Optional.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/util/stream/DoubleStream.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *Stream::class$ = NULL;
      jmethodID *Stream::mids$ = NULL;
      bool Stream::live$ = false;

      jclass Stream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/Stream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_concat_ea8982e01635e55c] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
          mids$[mid_count_6c0ce7e438e5ded4] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_14e21bf777ff0ccf] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/Stream;");
          mids$[mid_empty_14e21bf777ff0ccf] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/Stream;");
          mids$[mid_findAny_9fe5189c8c3b230d] = env->getMethodID(cls, "findAny", "()Ljava/util/Optional;");
          mids$[mid_findFirst_9fe5189c8c3b230d] = env->getMethodID(cls, "findFirst", "()Ljava/util/Optional;");
          mids$[mid_generate_1f5b10f94e90fcb5] = env->getStaticMethodID(cls, "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;");
          mids$[mid_limit_06d5b3d071eb65f4] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/Stream;");
          mids$[mid_max_df542debf2a7bc51] = env->getMethodID(cls, "max", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_min_df542debf2a7bc51] = env->getMethodID(cls, "min", "(Ljava/util/Comparator;)Ljava/util/Optional;");
          mids$[mid_of_f33e55a5742a331d] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_of_0338d8b14797c119] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_ofNullable_0338d8b14797c119] = env->getStaticMethodID(cls, "ofNullable", "(Ljava/lang/Object;)Ljava/util/stream/Stream;");
          mids$[mid_skip_06d5b3d071eb65f4] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/Stream;");
          mids$[mid_sorted_14e21bf777ff0ccf] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/Stream;");
          mids$[mid_sorted_0d98d46dfd00f1f4] = env->getMethodID(cls, "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;");
          mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Stream Stream::concat(const Stream & a0, const Stream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_concat_ea8982e01635e55c], a0.this$, a1.this$));
      }

      jlong Stream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_6c0ce7e438e5ded4]);
      }

      Stream Stream::distinct() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_distinct_14e21bf777ff0ccf]));
      }

      Stream Stream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_empty_14e21bf777ff0ccf]));
      }

      ::java::util::Optional Stream::findAny() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findAny_9fe5189c8c3b230d]));
      }

      ::java::util::Optional Stream::findFirst() const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_findFirst_9fe5189c8c3b230d]));
      }

      Stream Stream::generate(const ::java::util::function::Supplier & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_generate_1f5b10f94e90fcb5], a0.this$));
      }

      Stream Stream::limit(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_limit_06d5b3d071eb65f4], a0));
      }

      ::java::util::Optional Stream::max$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_max_df542debf2a7bc51], a0.this$));
      }

      ::java::util::Optional Stream::min$(const ::java::util::Comparator & a0) const
      {
        return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_min_df542debf2a7bc51], a0.this$));
      }

      Stream Stream::of(const JArray< ::java::lang::Object > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_f33e55a5742a331d], a0.this$));
      }

      Stream Stream::of(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_of_0338d8b14797c119], a0.this$));
      }

      Stream Stream::ofNullable(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Stream(env->callStaticObjectMethod(cls, mids$[mid_ofNullable_0338d8b14797c119], a0.this$));
      }

      Stream Stream::skip(jlong a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_skip_06d5b3d071eb65f4], a0));
      }

      Stream Stream::sorted() const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_14e21bf777ff0ccf]));
      }

      Stream Stream::sorted(const ::java::util::Comparator & a0) const
      {
        return Stream(env->callObjectMethod(this$, mids$[mid_sorted_0d98d46dfd00f1f4], a0.this$));
      }

      JArray< ::java::lang::Object > Stream::toArray() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_count(t_Stream *self);
      static PyObject *t_Stream_distinct(t_Stream *self);
      static PyObject *t_Stream_empty(PyTypeObject *type);
      static PyObject *t_Stream_findAny(t_Stream *self);
      static PyObject *t_Stream_findFirst(t_Stream *self);
      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg);
      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args);
      static PyObject *t_Stream_toArray(t_Stream *self);
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data);
      static PyGetSetDef t_Stream__fields_[] = {
        DECLARE_GET_FIELD(t_Stream, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Stream__methods_[] = {
        DECLARE_METHOD(t_Stream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, of_, METH_VARARGS),
        DECLARE_METHOD(t_Stream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, count, METH_NOARGS),
        DECLARE_METHOD(t_Stream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_Stream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_Stream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_Stream, generate, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, limit, METH_O),
        DECLARE_METHOD(t_Stream, max, METH_O),
        DECLARE_METHOD(t_Stream, min, METH_O),
        DECLARE_METHOD(t_Stream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Stream, ofNullable, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Stream, skip, METH_O),
        DECLARE_METHOD(t_Stream, sorted, METH_VARARGS),
        DECLARE_METHOD(t_Stream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Stream)[] = {
        { Py_tp_methods, t_Stream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Stream__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Stream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Stream, t_Stream, Stream);
      PyObject *t_Stream::wrap_Object(const Stream& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Stream::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Stream::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Stream *self = (t_Stream *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Stream::install(PyObject *module)
      {
        installType(&PY_TYPE(Stream), &PY_TYPE_DEF(Stream), module, "Stream", 0);
      }

      void t_Stream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "class_", make_descriptor(Stream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "wrapfn_", make_descriptor(t_Stream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Stream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Stream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Stream::initializeClass, 1)))
          return NULL;
        return t_Stream::wrap_Object(Stream(((t_Stream *) arg)->object.this$));
      }
      static PyObject *t_Stream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Stream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Stream_of_(t_Stream *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Stream_concat(PyTypeObject *type, PyObject *args)
      {
        Stream a0((jobject) NULL);
        PyTypeObject **p0;
        Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Stream result((jobject) NULL);

        if (!parseArgs(args, "KK", Stream::initializeClass, Stream::initializeClass, &a0, &p0, t_Stream::parameters_, &a1, &p1, t_Stream::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::concat(a0, a1));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_Stream_count(t_Stream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_Stream_distinct(t_Stream *self)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_Stream::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_empty(PyTypeObject *type)
      {
        Stream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::Stream::empty());
        return t_Stream::wrap_Object(result);
      }

      static PyObject *t_Stream_findAny(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_findFirst(t_Stream *self)
      {
        ::java::util::Optional result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_Stream_generate(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::function::Supplier a0((jobject) NULL);
        PyTypeObject **p0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::function::Supplier::initializeClass, &a0, &p0, ::java::util::function::t_Supplier::parameters_))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::generate(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "generate", arg);
        return NULL;
      }

      static PyObject *t_Stream_limit(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_Stream_max(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.max$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "max", arg);
        return NULL;
      }

      static PyObject *t_Stream_min(t_Stream *self, PyObject *arg)
      {
        ::java::util::Comparator a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::Optional result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
        {
          OBJ_CALL(result = self->object.min$(a0));
          return ::java::util::t_Optional::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "min", arg);
        return NULL;
      }

      static PyObject *t_Stream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::java::lang::Object > a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "[o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
          {
            ::java::lang::Object a0((jobject) NULL);
            Stream result((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::Stream::of(a0));
              return t_Stream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_Stream_ofNullable(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        Stream result((jobject) NULL);

        if (!parseArg(arg, "o", &a0))
        {
          OBJ_CALL(result = ::java::util::stream::Stream::ofNullable(a0));
          return t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ofNullable", arg);
        return NULL;
      }

      static PyObject *t_Stream_skip(t_Stream *self, PyObject *arg)
      {
        jlong a0;
        Stream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_Stream_sorted(t_Stream *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.sorted());
            return t_Stream::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;
            Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(result = self->object.sorted(a0));
              return t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "sorted", args);
        return NULL;
      }

      static PyObject *t_Stream_toArray(t_Stream *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }
      static PyObject *t_Stream_get__parameters_(t_Stream *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfSquares.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfSquares::class$ = NULL;
          jmethodID *SumOfSquares::mids$ = NULL;
          bool SumOfSquares::live$ = false;

          jclass SumOfSquares::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfSquares");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_a5d20baeaddbb9bf] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_47ae13d04cd514fa] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfSquares;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfSquares::SumOfSquares() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void SumOfSquares::aggregate(const SumOfSquares & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_a5d20baeaddbb9bf], a0.this$);
          }

          void SumOfSquares::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          SumOfSquares SumOfSquares::copy() const
          {
            return SumOfSquares(env->callObjectMethod(this$, mids$[mid_copy_47ae13d04cd514fa]));
          }

          jdouble SumOfSquares::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong SumOfSquares::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble SumOfSquares::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void SumOfSquares::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg);
          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args);
          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data);
          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data);
          static PyGetSetDef t_SumOfSquares__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfSquares, n),
            DECLARE_GET_FIELD(t_SumOfSquares, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfSquares__methods_[] = {
            DECLARE_METHOD(t_SumOfSquares, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfSquares, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfSquares, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfSquares, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfSquares)[] = {
            { Py_tp_methods, t_SumOfSquares__methods_ },
            { Py_tp_init, (void *) t_SumOfSquares_init_ },
            { Py_tp_getset, t_SumOfSquares__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfSquares)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfSquares, t_SumOfSquares, SumOfSquares);

          void t_SumOfSquares::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfSquares), &PY_TYPE_DEF(SumOfSquares), module, "SumOfSquares", 0);
          }

          void t_SumOfSquares::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "class_", make_descriptor(SumOfSquares::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "wrapfn_", make_descriptor(t_SumOfSquares::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfSquares), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfSquares_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfSquares::initializeClass, 1)))
              return NULL;
            return t_SumOfSquares::wrap_Object(SumOfSquares(((t_SumOfSquares *) arg)->object.this$));
          }
          static PyObject *t_SumOfSquares_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfSquares::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfSquares_init_(t_SumOfSquares *self, PyObject *args, PyObject *kwds)
          {
            SumOfSquares object((jobject) NULL);

            INT_CALL(object = SumOfSquares());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfSquares_aggregate(t_SumOfSquares *self, PyObject *arg)
          {
            SumOfSquares a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfSquares::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfSquares_clear(t_SumOfSquares *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfSquares_copy(t_SumOfSquares *self, PyObject *args)
          {
            SumOfSquares result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfSquares::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfSquares_evaluate(t_SumOfSquares *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfSquares_getN(t_SumOfSquares *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfSquares_getResult(t_SumOfSquares *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfSquares_increment(t_SumOfSquares *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfSquares), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfSquares_get__n(t_SumOfSquares *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfSquares_get__result(t_SumOfSquares *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54FieldIntegrator::class$ = NULL;
        jmethodID *HighamHall54FieldIntegrator::mids$ = NULL;
        bool HighamHall54FieldIntegrator::live$ = false;

        jclass HighamHall54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_05ca1b2bf7edc3a6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_19be2ee49bc66dd7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_55546ef6a647f39b] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_8afe86b6a7e18fde] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54FieldStateInterpolator;");
            mids$[mid_estimateError_4b43ddf833459788] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_05ca1b2bf7edc3a6, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_19be2ee49bc66dd7, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > HighamHall54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
        }

        jint HighamHall54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_55546ef6a647f39b]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegrator)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegrator_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegrator, t_HighamHall54FieldIntegrator, HighamHall54FieldIntegrator);
        PyObject *t_HighamHall54FieldIntegrator::wrap_Object(const HighamHall54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegrator), &PY_TYPE_DEF(HighamHall54FieldIntegrator), module, "HighamHall54FieldIntegrator", 0);
        }

        void t_HighamHall54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "class_", make_descriptor(HighamHall54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegrator::wrap_Object(HighamHall54FieldIntegrator(((t_HighamHall54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/Throwable.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractMessageWriter::class$ = NULL;
            jmethodID *PythonAbstractMessageWriter::mids$ = NULL;
            bool PythonAbstractMessageWriter::live$ = false;

            jclass PythonAbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_171dbda6f9dc03f2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractMessageWriter::PythonAbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_171dbda6f9dc03f2, a0.this$, a1.this$, a2, a3.this$)) {}

            void PythonAbstractMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
            }

            jlong PythonAbstractMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
            }

            void PythonAbstractMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args);
            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self);
            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args);
            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data);
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageWriter)[] = {
              { Py_tp_methods, t_PythonAbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractMessageWriter_init_ },
              { Py_tp_getset, t_PythonAbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageWriter, t_PythonAbstractMessageWriter, PythonAbstractMessageWriter);
            PyObject *t_PythonAbstractMessageWriter::wrap_Object(const PythonAbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonAbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageWriter *self = (t_PythonAbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonAbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageWriter), &PY_TYPE_DEF(PythonAbstractMessageWriter), module, "PythonAbstractMessageWriter", 1);
            }

            void t_PythonAbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "class_", make_descriptor(PythonAbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "wrapfn_", make_descriptor(t_PythonAbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageWriter_pythonDecRef0 },
                { "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonAbstractMessageWriter_writeSegmentContent1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonAbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageWriter::wrap_Object(PythonAbstractMessageWriter(((t_PythonAbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageWriter_of_(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonAbstractMessageWriter_init_(t_PythonAbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              PythonAbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonAbstractMessageWriter_finalize(t_PythonAbstractMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageWriter_pythonExtension(t_PythonAbstractMessageWriter *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  jlong result;
                  OBJ_CALL(result = self->object.pythonExtension());
                  return PyLong_FromLongLong((PY_LONG_LONG) result);
                }
                break;
               case 1:
                {
                  jlong a0;

                  if (!parseArgs(args, "J", &a0))
                  {
                    OBJ_CALL(self->object.pythonExtension(a0));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
              return NULL;
            }

            static void JNICALL t_PythonAbstractMessageWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageWriter_writeSegmentContent1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageWriter::mids$[PythonAbstractMessageWriter::mid_pythonExtension_6c0ce7e438e5ded4]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o2 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a2));
              PyObject *result = PyObject_CallMethod(obj, "writeSegmentContent", "OdO", o0, (double) a1, o2);
              Py_DECREF(o0);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractMessageWriter_get__self(t_PythonAbstractMessageWriter *self, void *data)
            {
              jlong ptr;
              OBJ_CALL(ptr = self->object.pythonExtension());
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                Py_INCREF(obj);
                return obj;
              }
              else
                Py_RETURN_NONE;
            }
            static PyObject *t_PythonAbstractMessageWriter_get__parameters_(t_PythonAbstractMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *FieldParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool FieldParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass FieldParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2b60ab91449b218c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_807539b9f4a9a76c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDurationDriver_a59daa5e273117e1] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_b77c61c859c7ff3e] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_e1f470b0144bf2f8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2b60ab91449b218c, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldParameterDrivenDateIntervalDetector::FieldParameterDrivenDateIntervalDetector(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_807539b9f4a9a76c, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::utils::ParameterDriver FieldParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_b77c61c859c7ff3e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_b77c61c859c7ff3e]));
        }

        ::org::orekit::utils::DateDriver FieldParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_b77c61c859c7ff3e]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_FieldParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_FieldParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_FieldParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_FieldParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_FieldParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_FieldParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldParameterDrivenDateIntervalDetector, t_FieldParameterDrivenDateIntervalDetector, FieldParameterDrivenDateIntervalDetector);
        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_Object(const FieldParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldParameterDrivenDateIntervalDetector *self = (t_FieldParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(FieldParameterDrivenDateIntervalDetector), module, "FieldParameterDrivenDateIntervalDetector", 0);
        }

        void t_FieldParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "class_", make_descriptor(FieldParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_FieldParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*FieldParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_FieldParameterDrivenDateIntervalDetector::wrap_Object(FieldParameterDrivenDateIntervalDetector(((t_FieldParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_of_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldParameterDrivenDateIntervalDetector_init_(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "Kskk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              FieldParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "KskD", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldParameterDrivenDateIntervalDetector(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_g(t_FieldParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getDurationDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getMedianDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStartDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_getStopDriver(t_FieldParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__parameters_(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__durationDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__medianDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__startDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_FieldParameterDrivenDateIntervalDetector_get__stopDriver(t_FieldParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *UserDefinedXmlTokenBuilder::class$ = NULL;
            jmethodID *UserDefinedXmlTokenBuilder::mids$ = NULL;
            bool UserDefinedXmlTokenBuilder::live$ = false;

            jclass UserDefinedXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/UserDefinedXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedXmlTokenBuilder::UserDefinedXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::java::util::List UserDefinedXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_2c588550a962bd9d], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_UserDefinedXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedXmlTokenBuilder)[] = {
              { Py_tp_methods, t_UserDefinedXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_UserDefinedXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UserDefinedXmlTokenBuilder, t_UserDefinedXmlTokenBuilder, UserDefinedXmlTokenBuilder);

            void t_UserDefinedXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedXmlTokenBuilder), &PY_TYPE_DEF(UserDefinedXmlTokenBuilder), module, "UserDefinedXmlTokenBuilder", 0);
            }

            void t_UserDefinedXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "class_", make_descriptor(UserDefinedXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "wrapfn_", make_descriptor(t_UserDefinedXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_UserDefinedXmlTokenBuilder::wrap_Object(UserDefinedXmlTokenBuilder(((t_UserDefinedXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedXmlTokenBuilder_init_(t_UserDefinedXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              UserDefinedXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = UserDefinedXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_UserDefinedXmlTokenBuilder_buildTokens(t_UserDefinedXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonTransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonTransformProvider::class$ = NULL;
      jmethodID *PythonTransformProvider::mids$ = NULL;
      bool PythonTransformProvider::live$ = false;

      jclass PythonTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getTransform_976d4bc81671ce42] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_7a8ca6856fe3fc9e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTransformProvider::PythonTransformProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTransformProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTransformProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTransformProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self);
      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args);
      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data);
      static PyGetSetDef t_PythonTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTransformProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTransformProvider__methods_[] = {
        DECLARE_METHOD(t_PythonTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTransformProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTransformProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTransformProvider)[] = {
        { Py_tp_methods, t_PythonTransformProvider__methods_ },
        { Py_tp_init, (void *) t_PythonTransformProvider_init_ },
        { Py_tp_getset, t_PythonTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTransformProvider, t_PythonTransformProvider, PythonTransformProvider);

      void t_PythonTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTransformProvider), &PY_TYPE_DEF(PythonTransformProvider), module, "PythonTransformProvider", 1);
      }

      void t_PythonTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "class_", make_descriptor(PythonTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "wrapfn_", make_descriptor(t_PythonTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTransformProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTransformProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;", (void *) t_PythonTransformProvider_getTransform0 },
          { "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;", (void *) t_PythonTransformProvider_getTransform1 },
          { "pythonDecRef", "()V", (void *) t_PythonTransformProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTransformProvider::initializeClass, 1)))
          return NULL;
        return t_PythonTransformProvider::wrap_Object(PythonTransformProvider(((t_PythonTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTransformProvider_init_(t_PythonTransformProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonTransformProvider object((jobject) NULL);

        INT_CALL(object = PythonTransformProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTransformProvider_finalize(t_PythonTransformProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTransformProvider_pythonExtension(t_PythonTransformProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonTransformProvider_getTransform0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Transform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Transform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonTransformProvider_getTransform1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldTransform value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTransform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldTransform::initializeClass, &value))
        {
          throwTypeError("getTransform", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonTransformProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTransformProvider::mids$[PythonTransformProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTransformProvider_get__self(t_PythonTransformProvider *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *OneWayGNSSRangeBuilder::class$ = NULL;
          jmethodID *OneWayGNSSRangeBuilder::mids$ = NULL;
          bool OneWayGNSSRangeBuilder::live$ = false;

          jclass OneWayGNSSRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/OneWayGNSSRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_d111b18a662471b4] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/OneWayGNSSRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange OneWayGNSSRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange(env->callObjectMethod(this$, mids$[mid_build_d111b18a662471b4], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args);
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data);
          static PyGetSetDef t_OneWayGNSSRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRangeBuilder)[] = {
            { Py_tp_methods, t_OneWayGNSSRangeBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OneWayGNSSRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRangeBuilder, t_OneWayGNSSRangeBuilder, OneWayGNSSRangeBuilder);
          PyObject *t_OneWayGNSSRangeBuilder::wrap_Object(const OneWayGNSSRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRangeBuilder *self = (t_OneWayGNSSRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRangeBuilder), &PY_TYPE_DEF(OneWayGNSSRangeBuilder), module, "OneWayGNSSRangeBuilder", 0);
          }

          void t_OneWayGNSSRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "class_", make_descriptor(OneWayGNSSRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "wrapfn_", make_descriptor(t_OneWayGNSSRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRangeBuilder::wrap_Object(OneWayGNSSRangeBuilder(((t_OneWayGNSSRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRangeBuilder_of_(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OneWayGNSSRangeBuilder_build(t_OneWayGNSSRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::OneWayGNSSRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_OneWayGNSSRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(OneWayGNSSRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_OneWayGNSSRangeBuilder_get__parameters_(t_OneWayGNSSRangeBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *AbstractFieldOfView::class$ = NULL;
        jmethodID *AbstractFieldOfView::mids$ = NULL;
        bool AbstractFieldOfView::live$ = false;

        jclass AbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/AbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMargin_b74f83833fdad017] = env->getMethodID(cls, "getMargin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractFieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_b74f83833fdad017]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {
        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self);
        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data);
        static PyGetSetDef t_AbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, getMargin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOfView)[] = {
          { Py_tp_methods, t_AbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldOfView, t_AbstractFieldOfView, AbstractFieldOfView);

        void t_AbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldOfView), &PY_TYPE_DEF(AbstractFieldOfView), module, "AbstractFieldOfView", 0);
        }

        void t_AbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "class_", make_descriptor(AbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "wrapfn_", make_descriptor(t_AbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldOfView::wrap_Object(AbstractFieldOfView(((t_AbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ResidualFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ResidualFilter::class$ = NULL;
          jmethodID *ResidualFilter::mids$ = NULL;
          bool ResidualFilter::live$ = false;

          jclass ResidualFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ResidualFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_filter_5714f5cbb8239657] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ResidualFilter::ResidualFilter(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          void ResidualFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_5714f5cbb8239657], a0.this$, a1.this$);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {
          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args);
          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args);
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data);
          static PyGetSetDef t_ResidualFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ResidualFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ResidualFilter__methods_[] = {
            DECLARE_METHOD(t_ResidualFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ResidualFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ResidualFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ResidualFilter)[] = {
            { Py_tp_methods, t_ResidualFilter__methods_ },
            { Py_tp_init, (void *) t_ResidualFilter_init_ },
            { Py_tp_getset, t_ResidualFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ResidualFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ResidualFilter, t_ResidualFilter, ResidualFilter);
          PyObject *t_ResidualFilter::wrap_Object(const ResidualFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ResidualFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ResidualFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ResidualFilter *self = (t_ResidualFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ResidualFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ResidualFilter), &PY_TYPE_DEF(ResidualFilter), module, "ResidualFilter", 0);
          }

          void t_ResidualFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "class_", make_descriptor(ResidualFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "wrapfn_", make_descriptor(t_ResidualFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ResidualFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ResidualFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ResidualFilter::initializeClass, 1)))
              return NULL;
            return t_ResidualFilter::wrap_Object(ResidualFilter(((t_ResidualFilter *) arg)->object.this$));
          }
          static PyObject *t_ResidualFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ResidualFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ResidualFilter_of_(t_ResidualFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ResidualFilter_init_(t_ResidualFilter *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ResidualFilter object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ResidualFilter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ResidualFilter_filter(t_ResidualFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ResidualFilter_get__parameters_(t_ResidualFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_cac25f7dbaea842d] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_613925b61b739417] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a0489c76be101130] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_6829aad0a64a3436] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_619a70d6b0e36c90] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f98b4f489decc901] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_8397a286d982b383] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonShortTermEncounter2DPOCMethod::PythonShortTermEncounter2DPOCMethod() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              void PythonShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
              }

              jlong PythonShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
              }

              void PythonShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj);
              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PythonShortTermEncounter2DPOCMethod, t_PythonShortTermEncounter2DPOCMethod, PythonShortTermEncounter2DPOCMethod);

              void t_PythonShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod), module, "PythonShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute1 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute2 },
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute3 },
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute4 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute5 },
                  { "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute6 },
                  { "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute7 },
                  { "getName", "()Ljava/lang/String;", (void *) t_PythonShortTermEncounter2DPOCMethod_getName8 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonShortTermEncounter2DPOCMethod_getType9 },
                  { "isAMaximumProbabilityOfCollisionMethod", "()Z", (void *) t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10 },
                  { "pythonDecRef", "()V", (void *) t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11 },
                };
                env->registerNatives(cls, methods, 12);
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonShortTermEncounter2DPOCMethod::wrap_Object(PythonShortTermEncounter2DPOCMethod(((t_PythonShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                PythonShortTermEncounter2DPOCMethod object((jobject) NULL);

                INT_CALL(object = PythonShortTermEncounter2DPOCMethod());
                self->object = object;

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jlong result;
                    OBJ_CALL(result = self->object.pythonExtension());
                    return PyLong_FromLongLong((PY_LONG_LONG) result);
                  }
                  break;
                 case 1:
                  {
                    jlong a0;

                    if (!parseArgs(args, "J", &a0))
                    {
                      OBJ_CALL(self->object.pythonExtension(a0));
                      Py_RETURN_NONE;
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
                return NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOd", o0, o1, (double) a2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOd", o0, o1, o2, o3, o4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a3));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOdd", o0, o1, o2, o3, (double) a4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::java::lang::String value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getName", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "s", &value))
                {
                  throwTypeError("getName", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
                  Py_DECREF(result);
                }
                else
                {
                  jobj = jenv->NewLocalRef(value.this$);
                  Py_DECREF(result);
                  return jobj;
                }

                return (jobject) NULL;
              }

              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jboolean value;
                PyObject *result = PyObject_CallMethod(obj, "isAMaximumProbabilityOfCollisionMethod", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "Z", &value))
                {
                  throwTypeError("isAMaximumProbabilityOfCollisionMethod", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jboolean) 0;
              }

              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_6c0ce7e438e5ded4]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data)
              {
                jlong ptr;
                OBJ_CALL(ptr = self->object.pythonExtension());
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  Py_INCREF(obj);
                  return obj;
                }
                else
                  Py_RETURN_NONE;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPMultipleShooter::class$ = NULL;
          jmethodID *CR3BPMultipleShooter::mids$ = NULL;
          bool CR3BPMultipleShooter::live$ = false;

          jclass CR3BPMultipleShooter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2381028a34dd7d63] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
              mids$[mid_setClosedOrbitConstraint_fcb96c98de6fad04] = env->getMethodID(cls, "setClosedOrbitConstraint", "(Z)V");
              mids$[mid_setEpochFreedom_34742154de10200a] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
              mids$[mid_setScaleLength_8ba9fe7a847cecad] = env->getMethodID(cls, "setScaleLength", "(D)V");
              mids$[mid_setScaleTime_8ba9fe7a847cecad] = env->getMethodID(cls, "setScaleTime", "(D)V");
              mids$[mid_getAugmentedInitialState_f4730dd89e9880a0] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_getNumberOfConstraints_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
              mids$[mid_computeAdditionalConstraints_a16345554cd829da] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
              mids$[mid_computeAdditionalJacobianMatrix_223f424c780300ce] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPMultipleShooter::CR3BPMultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_2381028a34dd7d63, a0.this$, a1.this$, a2.this$, a3, a4)) {}

          void CR3BPMultipleShooter::setClosedOrbitConstraint(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClosedOrbitConstraint_fcb96c98de6fad04], a0);
          }

          void CR3BPMultipleShooter::setEpochFreedom(jint a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setEpochFreedom_34742154de10200a], a0, a1);
          }

          void CR3BPMultipleShooter::setScaleLength(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleLength_8ba9fe7a847cecad], a0);
          }

          void CR3BPMultipleShooter::setScaleTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleTime_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args);
          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static PyGetSetDef t_CR3BPMultipleShooter__fields_[] = {
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, closedOrbitConstraint),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleLength),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPMultipleShooter__methods_[] = {
            DECLARE_METHOD(t_CR3BPMultipleShooter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setClosedOrbitConstraint, METH_O),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setEpochFreedom, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleLength, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleTime, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPMultipleShooter)[] = {
            { Py_tp_methods, t_CR3BPMultipleShooter__methods_ },
            { Py_tp_init, (void *) t_CR3BPMultipleShooter_init_ },
            { Py_tp_getset, t_CR3BPMultipleShooter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPMultipleShooter)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
            NULL
          };

          DEFINE_TYPE(CR3BPMultipleShooter, t_CR3BPMultipleShooter, CR3BPMultipleShooter);

          void t_CR3BPMultipleShooter::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPMultipleShooter), &PY_TYPE_DEF(CR3BPMultipleShooter), module, "CR3BPMultipleShooter", 0);
          }

          void t_CR3BPMultipleShooter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "class_", make_descriptor(CR3BPMultipleShooter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "wrapfn_", make_descriptor(t_CR3BPMultipleShooter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPMultipleShooter::initializeClass, 1)))
              return NULL;
            return t_CR3BPMultipleShooter::wrap_Object(CR3BPMultipleShooter(((t_CR3BPMultipleShooter *) arg)->object.this$));
          }
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPMultipleShooter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jint a4;
            CR3BPMultipleShooter object((jobject) NULL);

            if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
            {
              INT_CALL(object = CR3BPMultipleShooter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setClosedOrbitConstraint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClosedOrbitConstraint", arg);
            return NULL;
          }

          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jint a0;
            jboolean a1;

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              OBJ_CALL(self->object.setEpochFreedom(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setEpochFreedom", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleLength(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleLength", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleTime(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleTime", args, 2);
          }

          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setClosedOrbitConstraint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "closedOrbitConstraint", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleLength(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_092ea020a0658d1c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_values_977279dba88f814f] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_selectTransformer_bbc5efc9f6336667] = env->getMethodID(cls, "selectTransformer", "(Lorg/hipparchus/ode/events/Transformer;DZ)Lorg/hipparchus/ode/events/Transformer;");
            mids$[mid_isTriggeredOnIncreasing_9ab94ac1dc23b105] = env->getMethodID(cls, "isTriggeredOnIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_092ea020a0658d1c], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_977279dba88f814f]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
