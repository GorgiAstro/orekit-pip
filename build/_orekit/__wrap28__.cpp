#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockOneWayGNSSRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockOneWayGNSSRangeModifier::live$ = false;

          jclass RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockOneWayGNSSRangeModifier::RelativisticJ2ClockOneWayGNSSRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void RelativisticJ2ClockOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier, t_RelativisticJ2ClockOneWayGNSSRangeModifier, RelativisticJ2ClockOneWayGNSSRangeModifier);

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockOneWayGNSSRangeModifier), module, "RelativisticJ2ClockOneWayGNSSRangeModifier", 0);
          }

          void t_RelativisticJ2ClockOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "class_", make_descriptor(RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockOneWayGNSSRangeModifier::wrap_Object(RelativisticJ2ClockOneWayGNSSRangeModifier(((t_RelativisticJ2ClockOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockOneWayGNSSRangeModifier_init_(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_getParametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockOneWayGNSSRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/gnss/attitude/BeidouGeo.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouGeo::class$ = NULL;
        jmethodID *BeidouGeo::mids$ = NULL;
        bool BeidouGeo::live$ = false;

        jclass BeidouGeo::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouGeo");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a872ffc4376f5f34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouGeo::BeidouGeo(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_a872ffc4376f5f34, a0.this$, a1.this$, a2.this$, a3.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouGeo__methods_[] = {
          DECLARE_METHOD(t_BeidouGeo, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouGeo, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouGeo)[] = {
          { Py_tp_methods, t_BeidouGeo__methods_ },
          { Py_tp_init, (void *) t_BeidouGeo_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouGeo)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(BeidouGeo, t_BeidouGeo, BeidouGeo);

        void t_BeidouGeo::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouGeo), &PY_TYPE_DEF(BeidouGeo), module, "BeidouGeo", 0);
        }

        void t_BeidouGeo::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "class_", make_descriptor(BeidouGeo::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "wrapfn_", make_descriptor(t_BeidouGeo::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouGeo), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouGeo_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouGeo::initializeClass, 1)))
            return NULL;
          return t_BeidouGeo::wrap_Object(BeidouGeo(((t_BeidouGeo *) arg)->object.this$));
        }
        static PyObject *t_BeidouGeo_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouGeo::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouGeo_init_(t_BeidouGeo *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouGeo object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouGeo(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
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

          ::java::lang::Class *MeasurementBuilder::class$ = NULL;
          jmethodID *MeasurementBuilder::mids$ = NULL;
          bool MeasurementBuilder::live$ = false;

          jclass MeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_cb38ed914ba48f20] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_121e4e49170b7802] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_getModifiers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_eb47c48e4fca882c] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_cb38ed914ba48f20], a0.this$);
          }

          ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_build_121e4e49170b7802], a0.this$, a1.this$));
          }

          ::java::util::List MeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_e62d3bb06d56d7e3]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_eb47c48e4fca882c]));
          }

          void MeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
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
          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self);
          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args);
          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data);
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data);
          static PyGetSetDef t_MeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_MeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementBuilder)[] = {
            { Py_tp_methods, t_MeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementBuilder, t_MeasurementBuilder, MeasurementBuilder);
          PyObject *t_MeasurementBuilder::wrap_Object(const MeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_MeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_MeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_MeasurementBuilder *self = (t_MeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_MeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementBuilder), &PY_TYPE_DEF(MeasurementBuilder), module, "MeasurementBuilder", 0);
          }

          void t_MeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "class_", make_descriptor(MeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "wrapfn_", make_descriptor(t_MeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MeasurementBuilder::wrap_Object(MeasurementBuilder(((t_MeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementBuilder_of_(t_MeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_MeasurementBuilder_addModifier(t_MeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_build(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MeasurementBuilder_getModifiers(t_MeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MeasurementBuilder_getSatellites(t_MeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MeasurementBuilder_init(t_MeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_MeasurementBuilder_get__parameters_(t_MeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_MeasurementBuilder_get__modifiers(t_MeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MeasurementBuilder_get__satellites(t_MeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TimeSystemCorrection::class$ = NULL;
          jmethodID *TimeSystemCorrection::mids$ = NULL;
          bool TimeSystemCorrection::live$ = false;

          jclass TimeSystemCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TimeSystemCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_85b8b1cdaaa6ba5a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DD)V");
              mids$[mid_getReferenceDate_c325492395d89b24] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystemCorrectionA0_b74f83833fdad017] = env->getMethodID(cls, "getTimeSystemCorrectionA0", "()D");
              mids$[mid_getTimeSystemCorrectionA1_b74f83833fdad017] = env->getMethodID(cls, "getTimeSystemCorrectionA1", "()D");
              mids$[mid_getTimeSystemCorrectionType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getTimeSystemCorrectionType", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSystemCorrection::TimeSystemCorrection(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85b8b1cdaaa6ba5a, a0.this$, a1.this$, a2, a3)) {}

          ::org::orekit::time::AbsoluteDate TimeSystemCorrection::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_c325492395d89b24]));
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA0_b74f83833fdad017]);
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA1_b74f83833fdad017]);
          }

          ::java::lang::String TimeSystemCorrection::getTimeSystemCorrectionType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrectionType_1c1fa1e935d6cdcf]));
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data);
          static PyGetSetDef t_TimeSystemCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystemCorrection, referenceDate),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA0),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA1),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystemCorrection__methods_[] = {
            DECLARE_METHOD(t_TimeSystemCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA0, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA1, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystemCorrection)[] = {
            { Py_tp_methods, t_TimeSystemCorrection__methods_ },
            { Py_tp_init, (void *) t_TimeSystemCorrection_init_ },
            { Py_tp_getset, t_TimeSystemCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystemCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSystemCorrection, t_TimeSystemCorrection, TimeSystemCorrection);

          void t_TimeSystemCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystemCorrection), &PY_TYPE_DEF(TimeSystemCorrection), module, "TimeSystemCorrection", 0);
          }

          void t_TimeSystemCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "class_", make_descriptor(TimeSystemCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "wrapfn_", make_descriptor(t_TimeSystemCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystemCorrection::initializeClass, 1)))
              return NULL;
            return t_TimeSystemCorrection::wrap_Object(TimeSystemCorrection(((t_TimeSystemCorrection *) arg)->object.this$));
          }
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystemCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            TimeSystemCorrection object((jobject) NULL);

            if (!parseArgs(args, "skDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeSystemCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrectionType());
            return j2p(result);
          }

          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrectionType());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "org/orekit/files/ccsds/ndm/tdm/TrackingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TrackingMode::class$ = NULL;
            jmethodID *TrackingMode::mids$ = NULL;
            bool TrackingMode::live$ = false;
            TrackingMode *TrackingMode::SEQUENTIAL = NULL;
            TrackingMode *TrackingMode::SINGLE_DIFF = NULL;

            jclass TrackingMode::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TrackingMode");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_7f6cb78d58f40200] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");
                mids$[mid_values_399ca80c08004f83] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                SEQUENTIAL = new TrackingMode(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                SINGLE_DIFF = new TrackingMode(env->getStaticObjectField(cls, "SINGLE_DIFF", "Lorg/orekit/files/ccsds/ndm/tdm/TrackingMode;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TrackingMode TrackingMode::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TrackingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7f6cb78d58f40200], a0.this$));
            }

            JArray< TrackingMode > TrackingMode::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TrackingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_399ca80c08004f83]));
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
          namespace tdm {
            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args);
            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TrackingMode_values(PyTypeObject *type);
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data);
            static PyGetSetDef t_TrackingMode__fields_[] = {
              DECLARE_GET_FIELD(t_TrackingMode, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TrackingMode__methods_[] = {
              DECLARE_METHOD(t_TrackingMode, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, of_, METH_VARARGS),
              DECLARE_METHOD(t_TrackingMode, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TrackingMode, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TrackingMode)[] = {
              { Py_tp_methods, t_TrackingMode__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TrackingMode__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TrackingMode)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TrackingMode, t_TrackingMode, TrackingMode);
            PyObject *t_TrackingMode::wrap_Object(const TrackingMode& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TrackingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TrackingMode::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TrackingMode *self = (t_TrackingMode *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TrackingMode::install(PyObject *module)
            {
              installType(&PY_TYPE(TrackingMode), &PY_TYPE_DEF(TrackingMode), module, "TrackingMode", 0);
            }

            void t_TrackingMode::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "class_", make_descriptor(TrackingMode::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "wrapfn_", make_descriptor(t_TrackingMode::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "boxfn_", make_descriptor(boxObject));
              env->getClass(TrackingMode::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SEQUENTIAL", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SEQUENTIAL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingMode), "SINGLE_DIFF", make_descriptor(t_TrackingMode::wrap_Object(*TrackingMode::SINGLE_DIFF)));
            }

            static PyObject *t_TrackingMode_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TrackingMode::initializeClass, 1)))
                return NULL;
              return t_TrackingMode::wrap_Object(TrackingMode(((t_TrackingMode *) arg)->object.this$));
            }
            static PyObject *t_TrackingMode_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TrackingMode::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TrackingMode_of_(t_TrackingMode *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TrackingMode_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TrackingMode result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::valueOf(a0));
                return t_TrackingMode::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TrackingMode_values(PyTypeObject *type)
            {
              JArray< TrackingMode > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TrackingMode::values());
              return JArray<jobject>(result.this$).wrap(t_TrackingMode::wrap_jobject);
            }
            static PyObject *t_TrackingMode_get__parameters_(t_TrackingMode *self, void *data)
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
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool FieldAbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_237ae1c2ddd68062] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_92e0516c51076c2f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_5295144d3ac34660] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_7f6d7ca3076fa7fe] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_63bfdcc4b7a0536c] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_262c7bb3e251612b] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_237ae1c2ddd68062, a0.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_92e0516c51076c2f, a0, a1.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_5295144d3ac34660, a0, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_7f6d7ca3076fa7fe, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldAbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_63bfdcc4b7a0536c]));
      }

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_2c51111cc6894ba1]));
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
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator, t_FieldAbsolutePVCoordinatesHermiteInterpolator, FieldAbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator), module, "FieldAbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(FieldAbsolutePVCoordinatesHermiteInterpolator(((t_FieldAbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationExtremumDetector::class$ = NULL;
        jmethodID *FieldElevationExtremumDetector::mids$ = NULL;
        bool FieldElevationExtremumDetector::live$ = false;

        jclass FieldElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c973085a7c4e0fab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_8f6abd8bda6d7bf0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevation_2203631097e94c79] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTopocentricFrame_c2b113ddceb69262] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_9c6333c0d7f052ab] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_c973085a7c4e0fab, a0.this$, a1.this$)) {}

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8f6abd8bda6d7bf0, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::getElevation(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_2203631097e94c79], a0.this$));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_c2b113ddceb69262]));
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
        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args);
        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self);
        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data);
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_FieldElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationExtremumDetector)[] = {
          { Py_tp_methods, t_FieldElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationExtremumDetector_init_ },
          { Py_tp_getset, t_FieldElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationExtremumDetector, t_FieldElevationExtremumDetector, FieldElevationExtremumDetector);
        PyObject *t_FieldElevationExtremumDetector::wrap_Object(const FieldElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationExtremumDetector), &PY_TYPE_DEF(FieldElevationExtremumDetector), module, "FieldElevationExtremumDetector", 0);
        }

        void t_FieldElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "class_", make_descriptor(FieldElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "wrapfn_", make_descriptor(t_FieldElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationExtremumDetector::wrap_Object(FieldElevationExtremumDetector(((t_FieldElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularRadioRefractionModifier::class$ = NULL;
          jmethodID *AngularRadioRefractionModifier::mids$ = NULL;
          bool AngularRadioRefractionModifier::live$ = false;

          jclass AngularRadioRefractionModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8a73dfbd4c3170fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/AtmosphericRefractionModel;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRadioRefractionModifier::AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a73dfbd4c3170fc, a0.this$)) {}

          ::java::util::List AngularRadioRefractionModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void AngularRadioRefractionModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66], a0.this$);
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
          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self);
          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data);
          static PyGetSetDef t_AngularRadioRefractionModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRadioRefractionModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRadioRefractionModifier__methods_[] = {
            DECLARE_METHOD(t_AngularRadioRefractionModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRadioRefractionModifier)[] = {
            { Py_tp_methods, t_AngularRadioRefractionModifier__methods_ },
            { Py_tp_init, (void *) t_AngularRadioRefractionModifier_init_ },
            { Py_tp_getset, t_AngularRadioRefractionModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRadioRefractionModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularRadioRefractionModifier, t_AngularRadioRefractionModifier, AngularRadioRefractionModifier);

          void t_AngularRadioRefractionModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRadioRefractionModifier), &PY_TYPE_DEF(AngularRadioRefractionModifier), module, "AngularRadioRefractionModifier", 0);
          }

          void t_AngularRadioRefractionModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "class_", make_descriptor(AngularRadioRefractionModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "wrapfn_", make_descriptor(t_AngularRadioRefractionModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRadioRefractionModifier::initializeClass, 1)))
              return NULL;
            return t_AngularRadioRefractionModifier::wrap_Object(AngularRadioRefractionModifier(((t_AngularRadioRefractionModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRadioRefractionModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
            AngularRadioRefractionModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularRadioRefractionModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *UnivariateDifferentiableVectorFunction::mids$ = NULL;
        bool UnivariateDifferentiableVectorFunction::live$ = false;

        jclass UnivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_d068edfe0e0d0552] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)[Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::Derivative > UnivariateDifferentiableVectorFunction::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::Derivative >(env->callObjectMethod(this$, mids$[mid_value_d068edfe0e0d0552], a0.this$));
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
      namespace differentiation {
        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_UnivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::UnivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableVectorFunction, t_UnivariateDifferentiableVectorFunction, UnivariateDifferentiableVectorFunction);

        void t_UnivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableVectorFunction), &PY_TYPE_DEF(UnivariateDifferentiableVectorFunction), module, "UnivariateDifferentiableVectorFunction", 0);
        }

        void t_UnivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "class_", make_descriptor(UnivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_UnivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableVectorFunction::wrap_Object(UnivariateDifferentiableVectorFunction(((t_UnivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateDifferentiableVectorFunction_value(t_UnivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Derivative > result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_Derivative::wrap_jobject);
          }

          return callSuper(PY_TYPE(UnivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonAbstractFrames.h"
#include "java/util/function/Supplier.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonAbstractFrames::class$ = NULL;
      jmethodID *PythonAbstractFrames::mids$ = NULL;
      bool PythonAbstractFrames::live$ = false;

      jclass PythonAbstractFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonAbstractFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_49fbab41a915bed1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Ljava/util/function/Supplier;)V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEOPHistory_a77e9d6bc0da2439] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractFrames::PythonAbstractFrames(const ::org::orekit::time::TimeScales & a0, const ::java::util::function::Supplier & a1) : ::org::orekit::frames::AbstractFrames(env->newObject(initializeClass, &mids$, mid_init$_49fbab41a915bed1, a0.this$, a1.this$)) {}

      void PythonAbstractFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAbstractFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAbstractFrames::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self);
      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data);
      static PyGetSetDef t_PythonAbstractFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractFrames__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractFrames)[] = {
        { Py_tp_methods, t_PythonAbstractFrames__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractFrames_init_ },
        { Py_tp_getset, t_PythonAbstractFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractFrames)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::AbstractFrames),
        NULL
      };

      DEFINE_TYPE(PythonAbstractFrames, t_PythonAbstractFrames, PythonAbstractFrames);

      void t_PythonAbstractFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractFrames), &PY_TYPE_DEF(PythonAbstractFrames), module, "PythonAbstractFrames", 1);
      }

      void t_PythonAbstractFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "class_", make_descriptor(PythonAbstractFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "wrapfn_", make_descriptor(t_PythonAbstractFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractFrames_getEOPHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractFrames_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAbstractFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractFrames::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractFrames::wrap_Object(PythonAbstractFrames(((t_PythonAbstractFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractFrames_init_(t_PythonAbstractFrames *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::java::util::function::Supplier a1((jobject) NULL);
        PyTypeObject **p1;
        PythonAbstractFrames object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::TimeScales::initializeClass, ::java::util::function::Supplier::initializeClass, &a0, &a1, &p1, ::java::util::function::t_Supplier::parameters_))
        {
          INT_CALL(object = PythonAbstractFrames(a0, a1));
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

      static PyObject *t_PythonAbstractFrames_finalize(t_PythonAbstractFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractFrames_pythonExtension(t_PythonAbstractFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractFrames_getEOPHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static void JNICALL t_PythonAbstractFrames_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractFrames::mids$[PythonAbstractFrames::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractFrames_get__self(t_PythonAbstractFrames *self, void *data)
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
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOFType::class$ = NULL;
        jmethodID *EncounterLOFType::mids$ = NULL;
        bool EncounterLOFType::live$ = false;
        EncounterLOFType *EncounterLOFType::DEFAULT = NULL;
        EncounterLOFType *EncounterLOFType::VALSECCHI = NULL;

        jclass EncounterLOFType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOFType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFrame_ac16d6afadb4c631] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_getFrame_b8e27c184b1c01f4] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_valueOf_4789c47c63e254ea] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/encounter/EncounterLOFType;");
            mids$[mid_values_4657dfc3f058fcd8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/encounter/EncounterLOFType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT = new EncounterLOFType(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            VALSECCHI = new EncounterLOFType(env->getStaticObjectField(cls, "VALSECCHI", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_ac16d6afadb4c631], a0.this$));
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_b8e27c184b1c01f4], a0.this$));
        }

        EncounterLOFType EncounterLOFType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EncounterLOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4789c47c63e254ea], a0.this$));
        }

        JArray< EncounterLOFType > EncounterLOFType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EncounterLOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_4657dfc3f058fcd8]));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EncounterLOFType_values(PyTypeObject *type);
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data);
        static PyGetSetDef t_EncounterLOFType__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOFType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOFType__methods_[] = {
          DECLARE_METHOD(t_EncounterLOFType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, of_, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOFType)[] = {
          { Py_tp_methods, t_EncounterLOFType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOFType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOFType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EncounterLOFType, t_EncounterLOFType, EncounterLOFType);
        PyObject *t_EncounterLOFType::wrap_Object(const EncounterLOFType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EncounterLOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EncounterLOFType::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOFType), &PY_TYPE_DEF(EncounterLOFType), module, "EncounterLOFType", 0);
        }

        void t_EncounterLOFType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "class_", make_descriptor(EncounterLOFType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "wrapfn_", make_descriptor(t_EncounterLOFType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "boxfn_", make_descriptor(boxObject));
          env->getClass(EncounterLOFType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "DEFAULT", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::DEFAULT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "VALSECCHI", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::VALSECCHI)));
        }

        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOFType::initializeClass, 1)))
            return NULL;
          return t_EncounterLOFType::wrap_Object(EncounterLOFType(((t_EncounterLOFType *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOFType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFrame", args);
          return NULL;
        }

        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EncounterLOFType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::valueOf(a0));
            return t_EncounterLOFType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EncounterLOFType_values(PyTypeObject *type)
        {
          JArray< EncounterLOFType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::values());
          return JArray<jobject>(result.this$).wrap(t_EncounterLOFType::wrap_jobject);
        }
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame45.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame45::class$ = NULL;
          jmethodID *SubFrame45::mids$ = NULL;
          bool SubFrame45::live$ = false;

          jclass SubFrame45::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame45");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDataId_55546ef6a647f39b] = env->getMethodID(cls, "getDataId", "()I");
              mids$[mid_getSvId_55546ef6a647f39b] = env->getMethodID(cls, "getSvId", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame45::getDataId() const
          {
            return env->callIntMethod(this$, mids$[mid_getDataId_55546ef6a647f39b]);
          }

          jint SubFrame45::getSvId() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvId_55546ef6a647f39b]);
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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self);
          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data);
          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data);
          static PyGetSetDef t_SubFrame45__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame45, dataId),
            DECLARE_GET_FIELD(t_SubFrame45, svId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame45__methods_[] = {
            DECLARE_METHOD(t_SubFrame45, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame45, getDataId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame45, getSvId, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame45)[] = {
            { Py_tp_methods, t_SubFrame45__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame45__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame45)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame45, t_SubFrame45, SubFrame45);

          void t_SubFrame45::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame45), &PY_TYPE_DEF(SubFrame45), module, "SubFrame45", 0);
          }

          void t_SubFrame45::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "class_", make_descriptor(SubFrame45::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "wrapfn_", make_descriptor(t_SubFrame45::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame45), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame45_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame45::initializeClass, 1)))
              return NULL;
            return t_SubFrame45::wrap_Object(SubFrame45(((t_SubFrame45 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame45_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame45::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame45_getDataId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDataId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_getSvId(t_SubFrame45 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame45_get__dataId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDataId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame45_get__svId(t_SubFrame45 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvId());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractStorelessUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractStorelessUnivariateStatistic::mids$ = NULL;
        bool AbstractStorelessUnivariateStatistic::live$ = false;

        jclass AbstractStorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_2b25c166f19a0def] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractStorelessUnivariateStatistic::AbstractStorelessUnivariateStatistic() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void AbstractStorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic AbstractStorelessUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_2b25c166f19a0def]));
        }

        jboolean AbstractStorelessUnivariateStatistic::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
        }

        jdouble AbstractStorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
        }

        jint AbstractStorelessUnivariateStatistic::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
        }

        void AbstractStorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
        }

        ::java::lang::String AbstractStorelessUnivariateStatistic::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_AbstractStorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractStorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractStorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, equals, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractStorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractStorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) t_AbstractStorelessUnivariateStatistic_init_ },
          { Py_tp_getset, t_AbstractStorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractStorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractStorelessUnivariateStatistic, t_AbstractStorelessUnivariateStatistic, AbstractStorelessUnivariateStatistic);

        void t_AbstractStorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractStorelessUnivariateStatistic), &PY_TYPE_DEF(AbstractStorelessUnivariateStatistic), module, "AbstractStorelessUnivariateStatistic", 0);
        }

        void t_AbstractStorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "class_", make_descriptor(AbstractStorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractStorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractStorelessUnivariateStatistic::wrap_Object(AbstractStorelessUnivariateStatistic(((t_AbstractStorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds)
        {
          AbstractStorelessUnivariateStatistic object((jobject) NULL);

          INT_CALL(object = AbstractStorelessUnivariateStatistic());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_StorelessUnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AdditionalStateProvider::class$ = NULL;
      jmethodID *AdditionalStateProvider::mids$ = NULL;
      bool AdditionalStateProvider::live$ = false;

      jclass AdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_yields_97df9017614a1945] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > AdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_f227e5f48720b798], a0.this$));
      }

      ::java::lang::String AdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      void AdditionalStateProvider::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
      }

      jboolean AdditionalStateProvider::yields(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_97df9017614a1945], a0.this$);
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
      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self);
      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args);
      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data);
      static PyGetSetDef t_AdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AdditionalStateProvider, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_AdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_AdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_AdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AdditionalStateProvider)[] = {
        { Py_tp_methods, t_AdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AdditionalStateProvider, t_AdditionalStateProvider, AdditionalStateProvider);

      void t_AdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AdditionalStateProvider), &PY_TYPE_DEF(AdditionalStateProvider), module, "AdditionalStateProvider", 0);
      }

      void t_AdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "class_", make_descriptor(AdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "wrapfn_", make_descriptor(t_AdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_AdditionalStateProvider::wrap_Object(AdditionalStateProvider(((t_AdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_AdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AdditionalStateProvider_getAdditionalState(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_getName(t_AdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AdditionalStateProvider_init(t_AdditionalStateProvider *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_yields(t_AdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yields(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yields", arg);
        return NULL;
      }

      static PyObject *t_AdditionalStateProvider_get__name(t_AdditionalStateProvider *self, void *data)
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
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *ConstantAzimuthAiming::class$ = NULL;
          jmethodID *ConstantAzimuthAiming::mids$ = NULL;
          bool ConstantAzimuthAiming::live$ = false;

          jclass ConstantAzimuthAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/ConstantAzimuthAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d11e39be76d848c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_alongTileDirection_636e2b82319b8646] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantAzimuthAiming::ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d11e39be76d848c0, a0.this$, a1)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantAzimuthAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_636e2b82319b8646], a0.this$, a1.this$));
          }

          ::java::util::List ConstantAzimuthAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_e62d3bb06d56d7e3]));
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
    namespace models {
      namespace earth {
        namespace tessellation {
          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args);
          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self);
          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data);
          static PyGetSetDef t_ConstantAzimuthAiming__fields_[] = {
            DECLARE_GET_FIELD(t_ConstantAzimuthAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConstantAzimuthAiming__methods_[] = {
            DECLARE_METHOD(t_ConstantAzimuthAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantAzimuthAiming)[] = {
            { Py_tp_methods, t_ConstantAzimuthAiming__methods_ },
            { Py_tp_init, (void *) t_ConstantAzimuthAiming_init_ },
            { Py_tp_getset, t_ConstantAzimuthAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantAzimuthAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantAzimuthAiming, t_ConstantAzimuthAiming, ConstantAzimuthAiming);

          void t_ConstantAzimuthAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantAzimuthAiming), &PY_TYPE_DEF(ConstantAzimuthAiming), module, "ConstantAzimuthAiming", 0);
          }

          void t_ConstantAzimuthAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "class_", make_descriptor(ConstantAzimuthAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "wrapfn_", make_descriptor(t_ConstantAzimuthAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantAzimuthAiming::initializeClass, 1)))
              return NULL;
            return t_ConstantAzimuthAiming::wrap_Object(ConstantAzimuthAiming(((t_ConstantAzimuthAiming *) arg)->object.this$));
          }
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantAzimuthAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            jdouble a1;
            ConstantAzimuthAiming object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantAzimuthAiming(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GHmsjPolynomials::class$ = NULL;
            jmethodID *GHmsjPolynomials::mids$ = NULL;
            bool GHmsjPolynomials::live$ = false;

            jclass GHmsjPolynomials::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GHmsjPolynomials");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7458a7df112c6be9] = env->getMethodID(cls, "<init>", "(DDDDI)V");
                mids$[mid_getGmsj_2f53baea9459d443] = env->getMethodID(cls, "getGmsj", "(III)D");
                mids$[mid_getHmsj_2f53baea9459d443] = env->getMethodID(cls, "getHmsj", "(III)D");
                mids$[mid_getdGmsdAlpha_2f53baea9459d443] = env->getMethodID(cls, "getdGmsdAlpha", "(III)D");
                mids$[mid_getdGmsdBeta_2f53baea9459d443] = env->getMethodID(cls, "getdGmsdBeta", "(III)D");
                mids$[mid_getdGmsdh_2f53baea9459d443] = env->getMethodID(cls, "getdGmsdh", "(III)D");
                mids$[mid_getdGmsdk_2f53baea9459d443] = env->getMethodID(cls, "getdGmsdk", "(III)D");
                mids$[mid_getdHmsdAlpha_2f53baea9459d443] = env->getMethodID(cls, "getdHmsdAlpha", "(III)D");
                mids$[mid_getdHmsdBeta_2f53baea9459d443] = env->getMethodID(cls, "getdHmsdBeta", "(III)D");
                mids$[mid_getdHmsdh_2f53baea9459d443] = env->getMethodID(cls, "getdHmsdh", "(III)D");
                mids$[mid_getdHmsdk_2f53baea9459d443] = env->getMethodID(cls, "getdHmsdk", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GHmsjPolynomials::GHmsjPolynomials(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7458a7df112c6be9, a0, a1, a2, a3, a4)) {}

            jdouble GHmsjPolynomials::getGmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGmsj_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getHmsj(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHmsj_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdAlpha_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdBeta_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdh_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdGmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdGmsdk_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdAlpha(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdAlpha_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdBeta(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdBeta_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdh(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdh_2f53baea9459d443], a0, a1, a2);
            }

            jdouble GHmsjPolynomials::getdHmsdk(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getdHmsdk_2f53baea9459d443], a0, a1, a2);
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
            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args);
            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args);

            static PyMethodDef t_GHmsjPolynomials__methods_[] = {
              DECLARE_METHOD(t_GHmsjPolynomials, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GHmsjPolynomials, getGmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getHmsj, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdGmsdk, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdAlpha, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdBeta, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdh, METH_VARARGS),
              DECLARE_METHOD(t_GHmsjPolynomials, getdHmsdk, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GHmsjPolynomials)[] = {
              { Py_tp_methods, t_GHmsjPolynomials__methods_ },
              { Py_tp_init, (void *) t_GHmsjPolynomials_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GHmsjPolynomials)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GHmsjPolynomials, t_GHmsjPolynomials, GHmsjPolynomials);

            void t_GHmsjPolynomials::install(PyObject *module)
            {
              installType(&PY_TYPE(GHmsjPolynomials), &PY_TYPE_DEF(GHmsjPolynomials), module, "GHmsjPolynomials", 0);
            }

            void t_GHmsjPolynomials::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "class_", make_descriptor(GHmsjPolynomials::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "wrapfn_", make_descriptor(t_GHmsjPolynomials::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GHmsjPolynomials), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GHmsjPolynomials_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GHmsjPolynomials::initializeClass, 1)))
                return NULL;
              return t_GHmsjPolynomials::wrap_Object(GHmsjPolynomials(((t_GHmsjPolynomials *) arg)->object.this$));
            }
            static PyObject *t_GHmsjPolynomials_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GHmsjPolynomials::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GHmsjPolynomials_init_(t_GHmsjPolynomials *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              GHmsjPolynomials object((jobject) NULL);

              if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = GHmsjPolynomials(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GHmsjPolynomials_getGmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getGmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getGmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getHmsj(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getHmsj(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getHmsj", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdGmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdGmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdGmsdk", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdAlpha(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdAlpha(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdAlpha", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdBeta(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdBeta(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdBeta", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdh(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdh(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdh", args);
              return NULL;
            }

            static PyObject *t_GHmsjPolynomials_getdHmsdk(t_GHmsjPolynomials *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getdHmsdk(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdHmsdk", args);
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
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *DiscreteTroposphericModel::class$ = NULL;
          jmethodID *DiscreteTroposphericModel::mids$ = NULL;
          bool DiscreteTroposphericModel::live$ = false;

          jclass DiscreteTroposphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/DiscreteTroposphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement DiscreteTroposphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble DiscreteTroposphericModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args);

          static PyMethodDef t_DiscreteTroposphericModel__methods_[] = {
            DECLARE_METHOD(t_DiscreteTroposphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiscreteTroposphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiscreteTroposphericModel)[] = {
            { Py_tp_methods, t_DiscreteTroposphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiscreteTroposphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(DiscreteTroposphericModel, t_DiscreteTroposphericModel, DiscreteTroposphericModel);

          void t_DiscreteTroposphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(DiscreteTroposphericModel), &PY_TYPE_DEF(DiscreteTroposphericModel), module, "DiscreteTroposphericModel", 0);
          }

          void t_DiscreteTroposphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "class_", make_descriptor(DiscreteTroposphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "wrapfn_", make_descriptor(t_DiscreteTroposphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiscreteTroposphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiscreteTroposphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiscreteTroposphericModel::initializeClass, 1)))
              return NULL;
            return t_DiscreteTroposphericModel::wrap_Object(DiscreteTroposphericModel(((t_DiscreteTroposphericModel *) arg)->object.this$));
          }
          static PyObject *t_DiscreteTroposphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiscreteTroposphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DiscreteTroposphericModel_pathDelay(t_DiscreteTroposphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *FieldODEStepHandler::class$ = NULL;
        jmethodID *FieldODEStepHandler::mids$ = NULL;
        bool FieldODEStepHandler::live$ = false;

        jclass FieldODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/FieldODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_5b8144cf9ccecc03] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
            mids$[mid_handleStep_bd804f650c074774] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldODEStepHandler::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_5b8144cf9ccecc03], a0.this$);
        }

        void FieldODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_bd804f650c074774], a0.this$);
        }

        void FieldODEStepHandler::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg);
        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args);
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data);
        static PyGetSetDef t_FieldODEStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEStepHandler)[] = {
          { Py_tp_methods, t_FieldODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEStepHandler, t_FieldODEStepHandler, FieldODEStepHandler);
        PyObject *t_FieldODEStepHandler::wrap_Object(const FieldODEStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEStepHandler *self = (t_FieldODEStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEStepHandler), &PY_TYPE_DEF(FieldODEStepHandler), module, "FieldODEStepHandler", 0);
        }

        void t_FieldODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "class_", make_descriptor(FieldODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "wrapfn_", make_descriptor(t_FieldODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldODEStepHandler::wrap_Object(FieldODEStepHandler(((t_FieldODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEStepHandler_of_(t_FieldODEStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEStepHandler_finish(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_handleStep(t_FieldODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldODEStepHandler_init(t_FieldODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEStepHandler_get__parameters_(t_FieldODEStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *MagneticFieldDetector::class$ = NULL;
        jmethodID *MagneticFieldDetector::mids$ = NULL;
        bool MagneticFieldDetector::live$ = false;

        jclass MagneticFieldDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/MagneticFieldDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ed906644adf1627c] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_ed1263de4577c5a4] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_bd5544ae44ef5bcc] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_0576c70d09c1f3bb] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_74b6d21820f03f8f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/MagneticFieldDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ed906644adf1627c, a0, a1.this$, a2.this$)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jboolean a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ed1263de4577c5a4, a0, a1.this$, a2.this$, a3)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bd5544ae44ef5bcc, a0, a1, a2, a3.this$, a4.this$, a5)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5, const ::org::orekit::data::DataContext & a6) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0576c70d09c1f3bb, a0, a1, a2, a3.this$, a4.this$, a5, a6.this$)) {}

        jdouble MagneticFieldDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        void MagneticFieldDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
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
        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args);
        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args);
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data);
        static PyGetSetDef t_MagneticFieldDetector__fields_[] = {
          DECLARE_GET_FIELD(t_MagneticFieldDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MagneticFieldDetector__methods_[] = {
          DECLARE_METHOD(t_MagneticFieldDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MagneticFieldDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_MagneticFieldDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MagneticFieldDetector)[] = {
          { Py_tp_methods, t_MagneticFieldDetector__methods_ },
          { Py_tp_init, (void *) t_MagneticFieldDetector_init_ },
          { Py_tp_getset, t_MagneticFieldDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MagneticFieldDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(MagneticFieldDetector, t_MagneticFieldDetector, MagneticFieldDetector);
        PyObject *t_MagneticFieldDetector::wrap_Object(const MagneticFieldDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MagneticFieldDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MagneticFieldDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MagneticFieldDetector *self = (t_MagneticFieldDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MagneticFieldDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(MagneticFieldDetector), &PY_TYPE_DEF(MagneticFieldDetector), module, "MagneticFieldDetector", 0);
        }

        void t_MagneticFieldDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "class_", make_descriptor(MagneticFieldDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "wrapfn_", make_descriptor(t_MagneticFieldDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MagneticFieldDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MagneticFieldDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MagneticFieldDetector::initializeClass, 1)))
            return NULL;
          return t_MagneticFieldDetector::wrap_Object(MagneticFieldDetector(((t_MagneticFieldDetector *) arg)->object.this$));
        }
        static PyObject *t_MagneticFieldDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MagneticFieldDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MagneticFieldDetector_of_(t_MagneticFieldDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MagneticFieldDetector_init_(t_MagneticFieldDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              jboolean a3;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a2, &a3))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 6:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZ", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::bodies::OneAxisEllipsoid a4((jobject) NULL);
              jboolean a5;
              ::org::orekit::data::DataContext a6((jobject) NULL);
              MagneticFieldDetector object((jobject) NULL);

              if (!parseArgs(args, "DDDKkZk", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a4, &a5, &a6))
              {
                INT_CALL(object = MagneticFieldDetector(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(MagneticFieldDetector);
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

        static PyObject *t_MagneticFieldDetector_g(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_MagneticFieldDetector_init(t_MagneticFieldDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(MagneticFieldDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_MagneticFieldDetector_get__parameters_(t_MagneticFieldDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogNormalDistribution::class$ = NULL;
        jmethodID *LogNormalDistribution::mids$ = NULL;
        bool LogNormalDistribution::live$ = false;

        jclass LogNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_b74f83833fdad017] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getShape_b74f83833fdad017] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_99e3200dafc19573] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogNormalDistribution::LogNormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        LogNormalDistribution::LogNormalDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

        jdouble LogNormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble LogNormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble LogNormalDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_b74f83833fdad017]);
        }

        jdouble LogNormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble LogNormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble LogNormalDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_b74f83833fdad017]);
        }

        jdouble LogNormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble LogNormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean LogNormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble LogNormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
        }

        jdouble LogNormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_99e3200dafc19573], a0, a1);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self);
        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args);
        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data);
        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data);
        static PyGetSetDef t_LogNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogNormalDistribution, location),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogNormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogNormalDistribution, shape),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogNormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_LogNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogNormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_LogNormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogNormalDistribution)[] = {
          { Py_tp_methods, t_LogNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_LogNormalDistribution_init_ },
          { Py_tp_getset, t_LogNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogNormalDistribution, t_LogNormalDistribution, LogNormalDistribution);

        void t_LogNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogNormalDistribution), &PY_TYPE_DEF(LogNormalDistribution), module, "LogNormalDistribution", 0);
        }

        void t_LogNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "class_", make_descriptor(LogNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "wrapfn_", make_descriptor(t_LogNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_LogNormalDistribution::wrap_Object(LogNormalDistribution(((t_LogNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogNormalDistribution_init_(t_LogNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LogNormalDistribution object((jobject) NULL);

              INT_CALL(object = LogNormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LogNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LogNormalDistribution(a0, a1, a2));
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

        static PyObject *t_LogNormalDistribution_cumulativeProbability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_density(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getLocation(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getNumericalMean(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getNumericalVariance(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getShape(t_LogNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogNormalDistribution_getSupportLowerBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_getSupportUpperBound(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogNormalDistribution_isSupportConnected(t_LogNormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogNormalDistribution_logDensity(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_LogNormalDistribution_probability(t_LogNormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogNormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_LogNormalDistribution_get__location(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalMean(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__numericalVariance(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__shape(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportConnected(t_LogNormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogNormalDistribution_get__supportLowerBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogNormalDistribution_get__supportUpperBound(t_LogNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarS::class$ = NULL;
          jmethodID *CopolarS::mids$ = NULL;
          bool CopolarS::live$ = false;

          jclass CopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_b74f83833fdad017] = env->getMethodID(cls, "cs", "()D");
              mids$[mid_ds_b74f83833fdad017] = env->getMethodID(cls, "ds", "()D");
              mids$[mid_ns_b74f83833fdad017] = env->getMethodID(cls, "ns", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarS::cs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cs_b74f83833fdad017]);
          }

          jdouble CopolarS::ds() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ds_b74f83833fdad017]);
          }

          jdouble CopolarS::ns() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ns_b74f83833fdad017]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_cs(t_CopolarS *self);
          static PyObject *t_CopolarS_ds(t_CopolarS *self);
          static PyObject *t_CopolarS_ns(t_CopolarS *self);

          static PyMethodDef t_CopolarS__methods_[] = {
            DECLARE_METHOD(t_CopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarS)[] = {
            { Py_tp_methods, t_CopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarS, t_CopolarS, CopolarS);

          void t_CopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarS), &PY_TYPE_DEF(CopolarS), module, "CopolarS", 0);
          }

          void t_CopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "class_", make_descriptor(CopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "wrapfn_", make_descriptor(t_CopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarS::initializeClass, 1)))
              return NULL;
            return t_CopolarS::wrap_Object(CopolarS(((t_CopolarS *) arg)->object.this$));
          }
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarS_cs(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ds(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ds());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ns(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ns());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/SecondMoment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Variance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Variance::class$ = NULL;
          jmethodID *Variance::mids$ = NULL;
          bool Variance::live$ = false;

          jclass Variance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Variance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b3f951b64db17420] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_init$_fcb96c98de6fad04] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_22c546af386a65f5] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SecondMoment;)V");
              mids$[mid_aggregate_d122a82928050d6d] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Variance;)V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_c84fe742457c0520] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Variance;");
              mids$[mid_evaluate_79e4db9e1e3d84c9] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_5427cadc72cd59f7] = env->getMethodID(cls, "evaluate", "([D[DD)D");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0f0d79795aa485ac] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_evaluate_f09b11d2a075df86] = env->getMethodID(cls, "evaluate", "([DDII)D");
              mids$[mid_evaluate_e64ea24d7cd35a2c] = env->getMethodID(cls, "evaluate", "([D[DDII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_isBiasCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrection_2aadfd11114d01dd] = env->getMethodID(cls, "withBiasCorrection", "(Z)Lorg/hipparchus/stat/descriptive/moment/Variance;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Variance::Variance() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          Variance::Variance(const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b3f951b64db17420, a0.this$)) {}

          Variance::Variance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_fcb96c98de6fad04, a0)) {}

          Variance::Variance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SecondMoment & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_22c546af386a65f5, a0, a1.this$)) {}

          void Variance::aggregate(const Variance & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_d122a82928050d6d], a0.this$);
          }

          void Variance::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Variance Variance::copy() const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_copy_c84fe742457c0520]));
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_79e4db9e1e3d84c9], a0.this$, a1);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_5427cadc72cd59f7], a0.this$, a1.this$, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0f0d79795aa485ac], a0.this$, a1.this$, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_f09b11d2a075df86], a0.this$, a1, a2, a3);
          }

          jdouble Variance::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jint a3, jint a4) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_e64ea24d7cd35a2c], a0.this$, a1.this$, a2, a3, a4);
          }

          jlong Variance::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Variance::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Variance::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
          }

          jboolean Variance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_9ab94ac1dc23b105]);
          }

          Variance Variance::withBiasCorrection(jboolean a0) const
          {
            return Variance(env->callObjectMethod(this$, mids$[mid_withBiasCorrection_2aadfd11114d01dd], a0));
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
          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args);
          static PyObject *t_Variance_isBiasCorrected(t_Variance *self);
          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg);
          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data);
          static PyObject *t_Variance_get__n(t_Variance *self, void *data);
          static PyObject *t_Variance_get__result(t_Variance *self, void *data);
          static PyGetSetDef t_Variance__fields_[] = {
            DECLARE_GET_FIELD(t_Variance, biasCorrected),
            DECLARE_GET_FIELD(t_Variance, n),
            DECLARE_GET_FIELD(t_Variance, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Variance__methods_[] = {
            DECLARE_METHOD(t_Variance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Variance, aggregate, METH_O),
            DECLARE_METHOD(t_Variance, clear, METH_VARARGS),
            DECLARE_METHOD(t_Variance, copy, METH_VARARGS),
            DECLARE_METHOD(t_Variance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getN, METH_VARARGS),
            DECLARE_METHOD(t_Variance, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Variance, increment, METH_VARARGS),
            DECLARE_METHOD(t_Variance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_Variance, withBiasCorrection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Variance)[] = {
            { Py_tp_methods, t_Variance__methods_ },
            { Py_tp_init, (void *) t_Variance_init_ },
            { Py_tp_getset, t_Variance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Variance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Variance, t_Variance, Variance);

          void t_Variance::install(PyObject *module)
          {
            installType(&PY_TYPE(Variance), &PY_TYPE_DEF(Variance), module, "Variance", 0);
          }

          void t_Variance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "class_", make_descriptor(Variance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "wrapfn_", make_descriptor(t_Variance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Variance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Variance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Variance::initializeClass, 1)))
              return NULL;
            return t_Variance::wrap_Object(Variance(((t_Variance *) arg)->object.this$));
          }
          static PyObject *t_Variance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Variance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Variance_init_(t_Variance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Variance object((jobject) NULL);

                INT_CALL(object = Variance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a0((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = Variance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SecondMoment a1((jobject) NULL);
                Variance object((jobject) NULL);

                if (!parseArgs(args, "Zk", ::org::hipparchus::stat::descriptive::moment::SecondMoment::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Variance(a0, a1));
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

          static PyObject *t_Variance_aggregate(t_Variance *self, PyObject *arg)
          {
            Variance a0((jobject) NULL);

            if (!parseArg(arg, "k", Variance::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Variance_clear(t_Variance *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Variance_copy(t_Variance *self, PyObject *args)
          {
            Variance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Variance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Variance_evaluate(t_Variance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
              }
              break;
             case 4:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 5:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jint a4;
                jdouble result;

                if (!parseArgs(args, "[D[DDII", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Variance_getN(t_Variance *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Variance_getResult(t_Variance *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Variance_increment(t_Variance *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Variance), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Variance_isBiasCorrected(t_Variance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Variance_withBiasCorrection(t_Variance *self, PyObject *arg)
          {
            jboolean a0;
            Variance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrection(a0));
              return t_Variance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrection", arg);
            return NULL;
          }

          static PyObject *t_Variance_get__biasCorrected(t_Variance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Variance_get__n(t_Variance *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Variance_get__result(t_Variance *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region$Location::class$ = NULL;
        jmethodID *Region$Location::mids$ = NULL;
        bool Region$Location::live$ = false;
        Region$Location *Region$Location::BOUNDARY = NULL;
        Region$Location *Region$Location::INSIDE = NULL;
        Region$Location *Region$Location::OUTSIDE = NULL;

        jclass Region$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_52616fafb2f529ee] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_values_c41a9573ac399820] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Region$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOUNDARY = new Region$Location(env->getStaticObjectField(cls, "BOUNDARY", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            INSIDE = new Region$Location(env->getStaticObjectField(cls, "INSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            OUTSIDE = new Region$Location(env->getStaticObjectField(cls, "OUTSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region$Location Region$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Region$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_52616fafb2f529ee], a0.this$));
        }

        JArray< Region$Location > Region$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Region$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_c41a9573ac399820]));
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
    namespace geometry {
      namespace partitioning {
        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args);
        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Region$Location_values(PyTypeObject *type);
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data);
        static PyGetSetDef t_Region$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Region$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region$Location__methods_[] = {
          DECLARE_METHOD(t_Region$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region$Location)[] = {
          { Py_tp_methods, t_Region$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Region$Location, t_Region$Location, Region$Location);
        PyObject *t_Region$Location::wrap_Object(const Region$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Region$Location), &PY_TYPE_DEF(Region$Location), module, "Region$Location", 0);
        }

        void t_Region$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "class_", make_descriptor(Region$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "wrapfn_", make_descriptor(t_Region$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Region$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "BOUNDARY", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::BOUNDARY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "INSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::INSIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "OUTSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::OUTSIDE)));
        }

        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region$Location::initializeClass, 1)))
            return NULL;
          return t_Region$Location::wrap_Object(Region$Location(((t_Region$Location *) arg)->object.this$));
        }
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Region$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::valueOf(a0));
            return t_Region$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Region$Location_values(PyTypeObject *type)
        {
          JArray< Region$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Region$Location::wrap_jobject);
        }
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmHeaderKey::class$ = NULL;
            jmethodID *CdmHeaderKey::mids$ = NULL;
            bool CdmHeaderKey::live$ = false;
            CdmHeaderKey *CdmHeaderKey::CLASSIFICATION = NULL;
            CdmHeaderKey *CdmHeaderKey::MESSAGE_FOR = NULL;

            jclass CdmHeaderKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmHeaderKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_382b23642df2dc22] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;)Z");
                mids$[mid_valueOf_cd1758a76ae4fa4b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");
                mids$[mid_values_742939562d8f37df] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CLASSIFICATION = new CdmHeaderKey(env->getStaticObjectField(cls, "CLASSIFICATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                MESSAGE_FOR = new CdmHeaderKey(env->getStaticObjectField(cls, "MESSAGE_FOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmHeaderKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmHeaderKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_382b23642df2dc22], a0.this$, a1.this$, a2.this$);
            }

            CdmHeaderKey CdmHeaderKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmHeaderKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cd1758a76ae4fa4b], a0.this$));
            }

            JArray< CdmHeaderKey > CdmHeaderKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmHeaderKey >(env->callStaticObjectMethod(cls, mids$[mid_values_742939562d8f37df]));
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
            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args);
            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type);
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data);
            static PyGetSetDef t_CdmHeaderKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmHeaderKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmHeaderKey__methods_[] = {
              DECLARE_METHOD(t_CdmHeaderKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmHeaderKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmHeaderKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmHeaderKey)[] = {
              { Py_tp_methods, t_CdmHeaderKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmHeaderKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmHeaderKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmHeaderKey, t_CdmHeaderKey, CdmHeaderKey);
            PyObject *t_CdmHeaderKey::wrap_Object(const CdmHeaderKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmHeaderKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmHeaderKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmHeaderKey *self = (t_CdmHeaderKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmHeaderKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmHeaderKey), &PY_TYPE_DEF(CdmHeaderKey), module, "CdmHeaderKey", 0);
            }

            void t_CdmHeaderKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "class_", make_descriptor(CdmHeaderKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "wrapfn_", make_descriptor(t_CdmHeaderKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmHeaderKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "CLASSIFICATION", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::CLASSIFICATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmHeaderKey), "MESSAGE_FOR", make_descriptor(t_CdmHeaderKey::wrap_Object(*CdmHeaderKey::MESSAGE_FOR)));
            }

            static PyObject *t_CdmHeaderKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmHeaderKey::initializeClass, 1)))
                return NULL;
              return t_CdmHeaderKey::wrap_Object(CdmHeaderKey(((t_CdmHeaderKey *) arg)->object.this$));
            }
            static PyObject *t_CdmHeaderKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmHeaderKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmHeaderKey_of_(t_CdmHeaderKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmHeaderKey_process(t_CdmHeaderKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmHeaderKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmHeaderKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::valueOf(a0));
                return t_CdmHeaderKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmHeaderKey_values(PyTypeObject *type)
            {
              JArray< CdmHeaderKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmHeaderKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmHeaderKey::wrap_jobject);
            }
            static PyObject *t_CdmHeaderKey_get__parameters_(t_CdmHeaderKey *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem::class$ = NULL;
            jmethodID *LeastSquaresProblem::mids$ = NULL;
            bool LeastSquaresProblem::live$ = false;

            jclass LeastSquaresProblem::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem");

                mids$ = new jmethodID[max_mid];
                mids$[mid_evaluate_44eae3a43792b738] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getObservationSize_55546ef6a647f39b] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_55546ef6a647f39b] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_3a10cc75bd070d84] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresProblem::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_44eae3a43792b738], a0.this$));
            }

            jint LeastSquaresProblem::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_55546ef6a647f39b]);
            }

            jint LeastSquaresProblem::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_55546ef6a647f39b]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_3a10cc75bd070d84]));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self);
            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data);
            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresProblem, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem)[] = {
              { Py_tp_methods, t_LeastSquaresProblem__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::OptimizationProblem),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem, t_LeastSquaresProblem, LeastSquaresProblem);

            void t_LeastSquaresProblem::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem), &PY_TYPE_DEF(LeastSquaresProblem), module, "LeastSquaresProblem", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "Evaluation", make_descriptor(&PY_TYPE_DEF(LeastSquaresProblem$Evaluation)));
            }

            void t_LeastSquaresProblem::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "class_", make_descriptor(LeastSquaresProblem::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "wrapfn_", make_descriptor(t_LeastSquaresProblem::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem::wrap_Object(LeastSquaresProblem(((t_LeastSquaresProblem *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem_evaluate(t_LeastSquaresProblem *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem_getObservationSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getParameterSize(t_LeastSquaresProblem *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresProblem_getStart(t_LeastSquaresProblem *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem_get__observationSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__parameterSize(t_LeastSquaresProblem *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresProblem_get__start(t_LeastSquaresProblem *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *ComparableMeasurement::class$ = NULL;
        jmethodID *ComparableMeasurement::mids$ = NULL;
        bool ComparableMeasurement::live$ = false;

        jclass ComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/ComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compareTo_6343361fedc17b25] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_getObservedValue_25e1757a36c4dde2] = env->getMethodID(cls, "getObservedValue", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint ComparableMeasurement::compareTo(const ComparableMeasurement & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_compareTo_6343361fedc17b25], a0.this$);
        }

        JArray< jdouble > ComparableMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_25e1757a36c4dde2]));
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
        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg);
        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self);
        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data);
        static PyGetSetDef t_ComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_ComparableMeasurement, observedValue),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_ComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ComparableMeasurement, compareTo, METH_O),
          DECLARE_METHOD(t_ComparableMeasurement, getObservedValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ComparableMeasurement)[] = {
          { Py_tp_methods, t_ComparableMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ComparableMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
          NULL
        };

        DEFINE_TYPE(ComparableMeasurement, t_ComparableMeasurement, ComparableMeasurement);

        void t_ComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(ComparableMeasurement), &PY_TYPE_DEF(ComparableMeasurement), module, "ComparableMeasurement", 0);
        }

        void t_ComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "class_", make_descriptor(ComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "wrapfn_", make_descriptor(t_ComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ComparableMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_ComparableMeasurement::wrap_Object(ComparableMeasurement(((t_ComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_ComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ComparableMeasurement_compareTo(t_ComparableMeasurement *self, PyObject *arg)
        {
          ComparableMeasurement a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "k", ComparableMeasurement::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.compareTo(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
          return NULL;
        }

        static PyObject *t_ComparableMeasurement_getObservedValue(t_ComparableMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_ComparableMeasurement_get__observedValue(t_ComparableMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *FieldBodiesElements::class$ = NULL;
      jmethodID *FieldBodiesElements::mids$ = NULL;
      bool FieldBodiesElements::live$ = false;

      jclass FieldBodiesElements::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/FieldBodiesElements");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_93a3fd3c2b82dfe5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJu_81520b552cb3fa26] = env->getMethodID(cls, "getLJu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLJuDot_81520b552cb3fa26] = env->getMethodID(cls, "getLJuDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMa_81520b552cb3fa26] = env->getMethodID(cls, "getLMa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMaDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMe_81520b552cb3fa26] = env->getMethodID(cls, "getLMe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMeDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNe_81520b552cb3fa26] = env->getMethodID(cls, "getLNe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLNeDot_81520b552cb3fa26] = env->getMethodID(cls, "getLNeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSa_81520b552cb3fa26] = env->getMethodID(cls, "getLSa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLSaDot_81520b552cb3fa26] = env->getMethodID(cls, "getLSaDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUr_81520b552cb3fa26] = env->getMethodID(cls, "getLUr", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLUrDot_81520b552cb3fa26] = env->getMethodID(cls, "getLUrDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVe_81520b552cb3fa26] = env->getMethodID(cls, "getLVe", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLVeDot_81520b552cb3fa26] = env->getMethodID(cls, "getLVeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPa_81520b552cb3fa26] = env->getMethodID(cls, "getPa", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPaDot_81520b552cb3fa26] = env->getMethodID(cls, "getPaDot", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldBodiesElements::FieldBodiesElements(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::hipparchus::CalculusFieldElement & a12, const ::org::hipparchus::CalculusFieldElement & a13, const ::org::hipparchus::CalculusFieldElement & a14, const ::org::hipparchus::CalculusFieldElement & a15, const ::org::hipparchus::CalculusFieldElement & a16, const ::org::hipparchus::CalculusFieldElement & a17, const ::org::hipparchus::CalculusFieldElement & a18, const ::org::hipparchus::CalculusFieldElement & a19, const ::org::hipparchus::CalculusFieldElement & a20, const ::org::hipparchus::CalculusFieldElement & a21, const ::org::hipparchus::CalculusFieldElement & a22, const ::org::hipparchus::CalculusFieldElement & a23, const ::org::hipparchus::CalculusFieldElement & a24, const ::org::hipparchus::CalculusFieldElement & a25, const ::org::hipparchus::CalculusFieldElement & a26, const ::org::hipparchus::CalculusFieldElement & a27, const ::org::hipparchus::CalculusFieldElement & a28, const ::org::hipparchus::CalculusFieldElement & a29, const ::org::hipparchus::CalculusFieldElement & a30, const ::org::hipparchus::CalculusFieldElement & a31) : ::org::orekit::data::FieldDelaunayArguments(env->newObject(initializeClass, &mids$, mid_init$_93a3fd3c2b82dfe5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$, a16.this$, a17.this$, a18.this$, a19.this$, a20.this$, a21.this$, a22.this$, a23.this$, a24.this$, a25.this$, a26.this$, a27.this$, a28.this$, a29.this$, a30.this$, a31.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJu_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLJuDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLJuDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMa_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMaDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMe_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLMeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMeDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNe_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLNeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLNeDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSa_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLSaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLSaDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUr() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUr_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLUrDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLUrDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVe() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVe_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getLVeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLVeDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPa() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPa_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldBodiesElements::getPaDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPaDot_81520b552cb3fa26]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args);
      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self);
      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data);
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data);
      static PyGetSetDef t_FieldBodiesElements__fields_[] = {
        DECLARE_GET_FIELD(t_FieldBodiesElements, lE),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lEDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJu),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lJuDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lMeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lNeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lSaDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUr),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lUrDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVe),
        DECLARE_GET_FIELD(t_FieldBodiesElements, lVeDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, pa),
        DECLARE_GET_FIELD(t_FieldBodiesElements, paDot),
        DECLARE_GET_FIELD(t_FieldBodiesElements, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldBodiesElements__methods_[] = {
        DECLARE_METHOD(t_FieldBodiesElements, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBodiesElements, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJu, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLJuDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLMeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLNeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLSaDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUr, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLUrDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVe, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getLVeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPa, METH_NOARGS),
        DECLARE_METHOD(t_FieldBodiesElements, getPaDot, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBodiesElements)[] = {
        { Py_tp_methods, t_FieldBodiesElements__methods_ },
        { Py_tp_init, (void *) t_FieldBodiesElements_init_ },
        { Py_tp_getset, t_FieldBodiesElements__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBodiesElements)[] = {
        &PY_TYPE_DEF(::org::orekit::data::FieldDelaunayArguments),
        NULL
      };

      DEFINE_TYPE(FieldBodiesElements, t_FieldBodiesElements, FieldBodiesElements);
      PyObject *t_FieldBodiesElements::wrap_Object(const FieldBodiesElements& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldBodiesElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldBodiesElements::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldBodiesElements *self = (t_FieldBodiesElements *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldBodiesElements::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBodiesElements), &PY_TYPE_DEF(FieldBodiesElements), module, "FieldBodiesElements", 0);
      }

      void t_FieldBodiesElements::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "class_", make_descriptor(FieldBodiesElements::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "wrapfn_", make_descriptor(t_FieldBodiesElements::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBodiesElements), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBodiesElements_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBodiesElements::initializeClass, 1)))
          return NULL;
        return t_FieldBodiesElements::wrap_Object(FieldBodiesElements(((t_FieldBodiesElements *) arg)->object.this$));
      }
      static PyObject *t_FieldBodiesElements_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBodiesElements::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBodiesElements_of_(t_FieldBodiesElements *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldBodiesElements_init_(t_FieldBodiesElements *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
        PyTypeObject **p3;
        ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
        PyTypeObject **p4;
        ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
        PyTypeObject **p5;
        ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
        PyTypeObject **p6;
        ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
        PyTypeObject **p7;
        ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
        PyTypeObject **p8;
        ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
        PyTypeObject **p9;
        ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
        PyTypeObject **p10;
        ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::hipparchus::CalculusFieldElement a12((jobject) NULL);
        PyTypeObject **p12;
        ::org::hipparchus::CalculusFieldElement a13((jobject) NULL);
        PyTypeObject **p13;
        ::org::hipparchus::CalculusFieldElement a14((jobject) NULL);
        PyTypeObject **p14;
        ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
        PyTypeObject **p15;
        ::org::hipparchus::CalculusFieldElement a16((jobject) NULL);
        PyTypeObject **p16;
        ::org::hipparchus::CalculusFieldElement a17((jobject) NULL);
        PyTypeObject **p17;
        ::org::hipparchus::CalculusFieldElement a18((jobject) NULL);
        PyTypeObject **p18;
        ::org::hipparchus::CalculusFieldElement a19((jobject) NULL);
        PyTypeObject **p19;
        ::org::hipparchus::CalculusFieldElement a20((jobject) NULL);
        PyTypeObject **p20;
        ::org::hipparchus::CalculusFieldElement a21((jobject) NULL);
        PyTypeObject **p21;
        ::org::hipparchus::CalculusFieldElement a22((jobject) NULL);
        PyTypeObject **p22;
        ::org::hipparchus::CalculusFieldElement a23((jobject) NULL);
        PyTypeObject **p23;
        ::org::hipparchus::CalculusFieldElement a24((jobject) NULL);
        PyTypeObject **p24;
        ::org::hipparchus::CalculusFieldElement a25((jobject) NULL);
        PyTypeObject **p25;
        ::org::hipparchus::CalculusFieldElement a26((jobject) NULL);
        PyTypeObject **p26;
        ::org::hipparchus::CalculusFieldElement a27((jobject) NULL);
        PyTypeObject **p27;
        ::org::hipparchus::CalculusFieldElement a28((jobject) NULL);
        PyTypeObject **p28;
        ::org::hipparchus::CalculusFieldElement a29((jobject) NULL);
        PyTypeObject **p29;
        ::org::hipparchus::CalculusFieldElement a30((jobject) NULL);
        PyTypeObject **p30;
        ::org::hipparchus::CalculusFieldElement a31((jobject) NULL);
        PyTypeObject **p31;
        FieldBodiesElements object((jobject) NULL);

        if (!parseArgs(args, "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13, &p13, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a14, &p14, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a16, &p16, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a17, &p17, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a18, &p18, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a19, &p19, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a20, &p20, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a21, &p21, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a22, &p22, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a23, &p23, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a24, &p24, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a25, &p25, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a26, &p26, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a27, &p27, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a28, &p28, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a29, &p29, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a30, &p30, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a31, &p31, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldBodiesElements(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldBodiesElements_getLE(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLEDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJu(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLJuDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLJuDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLMeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLMeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLNeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLNeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLSaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLSaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUr(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUr());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLUrDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLUrDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVe(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVe());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getLVeDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLVeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPa(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPa());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldBodiesElements_getPaDot(t_FieldBodiesElements *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPaDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldBodiesElements_get__parameters_(t_FieldBodiesElements *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldBodiesElements_get__lE(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lEDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJu(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lJuDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLJuDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lMeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lNeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLNeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lSaDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLSaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUr(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUr());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lUrDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLUrDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVe(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVe());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__lVeDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLVeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__pa(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPa());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldBodiesElements_get__paDot(t_FieldBodiesElements *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPaDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearProcess::class$ = NULL;
          jmethodID *NonLinearProcess::mids$ = NULL;
          bool NonLinearProcess::live$ = false;

          jclass NonLinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_41e739fa741b9ca8] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
              mids$[mid_getInnovation_4bab677f74d0a7e4] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution NonLinearProcess::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_41e739fa741b9ca8], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector NonLinearProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_4bab677f74d0a7e4], a0.this$, a1.this$, a2.this$));
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
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data);
          static PyGetSetDef t_NonLinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearProcess__methods_[] = {
            DECLARE_METHOD(t_NonLinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getInnovation, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearProcess)[] = {
            { Py_tp_methods, t_NonLinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NonLinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearProcess, t_NonLinearProcess, NonLinearProcess);
          PyObject *t_NonLinearProcess::wrap_Object(const NonLinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NonLinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NonLinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearProcess), &PY_TYPE_DEF(NonLinearProcess), module, "NonLinearProcess", 0);
          }

          void t_NonLinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "class_", make_descriptor(NonLinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "wrapfn_", make_descriptor(t_NonLinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearProcess::initializeClass, 1)))
              return NULL;
            return t_NonLinearProcess::wrap_Object(NonLinearProcess(((t_NonLinearProcess *) arg)->object.this$));
          }
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data)
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
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCartesianOrbit::class$ = NULL;
      jmethodID *FieldCartesianOrbit::mids$ = NULL;
      bool FieldCartesianOrbit::live$ = false;

      jclass FieldCartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_5cd4fce038772e9b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CartesianOrbit;)V");
          mids$[mid_init$_e1cf5518a92ef935] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_77de91c247081784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_16a0bc6b5307ef8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_99dd76219aa0c8c0] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_81520b552cb3fa26] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_81520b552cb3fa26] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_81520b552cb3fa26] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_81520b552cb3fa26] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_81520b552cb3fa26] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_81520b552cb3fa26] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_9a2889aa8df030ca] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_shiftedBy_c08d83dfc0ce6a43] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_toOrbit_0e89356511a1622a] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CartesianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_5cd4fce038772e9b, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e1cf5518a92ef935, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_77de91c247081784, a0.this$, a1.this$, a2.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_16a0bc6b5307ef8d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      void FieldCartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_99dd76219aa0c8c0], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::OrbitType FieldCartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean FieldCartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_9a2889aa8df030ca], a0));
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_c08d83dfc0ce6a43], a0.this$));
      }

      ::org::orekit::orbits::CartesianOrbit FieldCartesianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_0e89356511a1622a]));
      }

      ::java::lang::String FieldCartesianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args);
      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data);
      static PyGetSetDef t_FieldCartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, a),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, e),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, i),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, type),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCartesianOrbit)[] = {
        { Py_tp_methods, t_FieldCartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCartesianOrbit_init_ },
        { Py_tp_getset, t_FieldCartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCartesianOrbit, t_FieldCartesianOrbit, FieldCartesianOrbit);
      PyObject *t_FieldCartesianOrbit::wrap_Object(const FieldCartesianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCartesianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCartesianOrbit), &PY_TYPE_DEF(FieldCartesianOrbit), module, "FieldCartesianOrbit", 0);
      }

      void t_FieldCartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "class_", make_descriptor(FieldCartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "wrapfn_", make_descriptor(t_FieldCartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCartesianOrbit::wrap_Object(FieldCartesianOrbit(((t_FieldCartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CartesianOrbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CartesianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiElliptic::class$ = NULL;
          jmethodID *FieldJacobiElliptic::mids$ = NULL;
          bool FieldJacobiElliptic::live$ = false;

          jclass FieldJacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_1d3e368d09a6f8a6] = env->getMethodID(cls, "arccd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccd_6e00dc5eb352fe51] = env->getMethodID(cls, "arccd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_1d3e368d09a6f8a6] = env->getMethodID(cls, "arccn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccn_6e00dc5eb352fe51] = env->getMethodID(cls, "arccn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_1d3e368d09a6f8a6] = env->getMethodID(cls, "arccs", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arccs_6e00dc5eb352fe51] = env->getMethodID(cls, "arccs", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcdc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdc_6e00dc5eb352fe51] = env->getMethodID(cls, "arcdc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcdn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcdn_6e00dc5eb352fe51] = env->getMethodID(cls, "arcdn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcds", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcds_6e00dc5eb352fe51] = env->getMethodID(cls, "arcds", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcnc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnc_6e00dc5eb352fe51] = env->getMethodID(cls, "arcnc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcnd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcnd_6e00dc5eb352fe51] = env->getMethodID(cls, "arcnd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcns", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcns_6e00dc5eb352fe51] = env->getMethodID(cls, "arcns", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcsc", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsc_6e00dc5eb352fe51] = env->getMethodID(cls, "arcsc", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcsd", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsd_6e00dc5eb352fe51] = env->getMethodID(cls, "arcsd", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_1d3e368d09a6f8a6] = env->getMethodID(cls, "arcsn", "(D)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_arcsn_6e00dc5eb352fe51] = env->getMethodID(cls, "arcsn", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getM_81520b552cb3fa26] = env->getMethodID(cls, "getM", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_valuesC_8be8c24353f60a26] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesC_129e43c0421b2a56] = env->getMethodID(cls, "valuesC", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarC;");
              mids$[mid_valuesD_1fef81187f1d85dd] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesD_2bcbd7af56ae2ca1] = env->getMethodID(cls, "valuesD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarD;");
              mids$[mid_valuesN_728427f2d414bf9f] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesN_85ecaf8f219fcb2d] = env->getMethodID(cls, "valuesN", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarN;");
              mids$[mid_valuesS_f895d5daf0fad2a4] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");
              mids$[mid_valuesS_a43667de5a7880ba] = env->getMethodID(cls, "valuesS", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldCopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccd_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccn_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arccs(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arccs_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdc_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcdn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcdn_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcds(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcds_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnc_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcnd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcnd_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcns(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcns_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsc(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsc_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsd(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsd_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(jdouble a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_1d3e368d09a6f8a6], a0));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::arcsn(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_arcsn_6e00dc5eb352fe51], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldJacobiElliptic::getM() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getM_81520b552cb3fa26]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_8be8c24353f60a26], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC FieldJacobiElliptic::valuesC(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_129e43c0421b2a56], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_1fef81187f1d85dd], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD FieldJacobiElliptic::valuesD(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_2bcbd7af56ae2ca1], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_728427f2d414bf9f], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN FieldJacobiElliptic::valuesN(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_85ecaf8f219fcb2d], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_f895d5daf0fad2a4], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS FieldJacobiElliptic::valuesS(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_a43667de5a7880ba], a0.this$));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self);
          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args);
          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data);
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data);
          static PyGetSetDef t_FieldJacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, m),
            DECLARE_GET_FIELD(t_FieldJacobiElliptic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiElliptic, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arccs, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcdn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcds, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcnd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcns, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsc, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsd, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, arcsn, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesC, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesD, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesN, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiElliptic, valuesS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiElliptic)[] = {
            { Py_tp_methods, t_FieldJacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldJacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiElliptic, t_FieldJacobiElliptic, FieldJacobiElliptic);
          PyObject *t_FieldJacobiElliptic::wrap_Object(const FieldJacobiElliptic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiElliptic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiElliptic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiElliptic *self = (t_FieldJacobiElliptic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiElliptic), &PY_TYPE_DEF(FieldJacobiElliptic), module, "FieldJacobiElliptic", 0);
          }

          void t_FieldJacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "class_", make_descriptor(FieldJacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "wrapfn_", make_descriptor(t_FieldJacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiElliptic::wrap_Object(FieldJacobiElliptic(((t_FieldJacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiElliptic_of_(t_FieldJacobiElliptic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldJacobiElliptic_arccd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arccs(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arccs(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcdn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcdn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcds(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcds(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcnd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcnd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcns(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcns(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsc(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsc(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsd(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsd(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_arcsn(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.arcsn(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_getM(t_FieldJacobiElliptic *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getM());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiElliptic_valuesC(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarC result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesC(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarC::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesD(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarD result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesD(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarD::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesN(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarN result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesN(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarN::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", args);
            return NULL;
          }

          static PyObject *t_FieldJacobiElliptic_valuesS(t_FieldJacobiElliptic *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldCopolarS result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.valuesS(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldCopolarS::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", args);
            return NULL;
          }
          static PyObject *t_FieldJacobiElliptic_get__parameters_(t_FieldJacobiElliptic *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiElliptic_get__m(t_FieldJacobiElliptic *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getM());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ButcherArrayProvider::class$ = NULL;
        jmethodID *ButcherArrayProvider::mids$ = NULL;
        bool ButcherArrayProvider::live$ = false;

        jclass ButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_3b7b373db8e7887f] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_25e1757a36c4dde2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_25e1757a36c4dde2] = env->getMethodID(cls, "getC", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< jdouble > > ButcherArrayProvider::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_3b7b373db8e7887f]));
        }

        JArray< jdouble > ButcherArrayProvider::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_25e1757a36c4dde2]));
        }

        JArray< jdouble > ButcherArrayProvider::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_25e1757a36c4dde2]));
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
        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data);
        static PyGetSetDef t_ButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_ButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_ButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ButcherArrayProvider)[] = {
          { Py_tp_methods, t_ButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ButcherArrayProvider, t_ButcherArrayProvider, ButcherArrayProvider);

        void t_ButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(ButcherArrayProvider), &PY_TYPE_DEF(ButcherArrayProvider), module, "ButcherArrayProvider", 0);
        }

        void t_ButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "class_", make_descriptor(ButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "wrapfn_", make_descriptor(t_ButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_ButcherArrayProvider::wrap_Object(ButcherArrayProvider(((t_ButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedRotation::class$ = NULL;
        jmethodID *FixedRotation::mids$ = NULL;
        bool FixedRotation::live$ = false;

        jclass FixedRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6eefa251775077b6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_23b7762b1a728d4c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_624b61103e61016a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedRotation::FixedRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6eefa251775077b6, a0.this$, a1.this$, a2)) {}

        ::java::util::stream::Stream FixedRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_23b7762b1a728d4c], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_624b61103e61016a], a0, a1.this$, a2.this$));
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
    namespace rugged {
      namespace los {
        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self);
        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args);
        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data);
        static PyGetSetDef t_FixedRotation__fields_[] = {
          DECLARE_GET_FIELD(t_FixedRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedRotation__methods_[] = {
          DECLARE_METHOD(t_FixedRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedRotation)[] = {
          { Py_tp_methods, t_FixedRotation__methods_ },
          { Py_tp_init, (void *) t_FixedRotation_init_ },
          { Py_tp_getset, t_FixedRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedRotation, t_FixedRotation, FixedRotation);

        void t_FixedRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedRotation), &PY_TYPE_DEF(FixedRotation), module, "FixedRotation", 0);
        }

        void t_FixedRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "class_", make_descriptor(FixedRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "wrapfn_", make_descriptor(t_FixedRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedRotation::initializeClass, 1)))
            return NULL;
          return t_FixedRotation::wrap_Object(FixedRotation(((t_FixedRotation *) arg)->object.this$));
        }
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          FixedRotation object((jobject) NULL);

          if (!parseArgs(args, "skD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FixedRotation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
