#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$OccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$OccultationAngles::mids$ = NULL;
      bool OccultationEngine$OccultationAngles::live$ = false;

      jclass OccultationEngine$OccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$OccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_b74f83833fdad017] = env->getMethodID(cls, "getLimbRadius", "()D");
          mids$[mid_getOccultedApparentRadius_b74f83833fdad017] = env->getMethodID(cls, "getOccultedApparentRadius", "()D");
          mids$[mid_getSeparation_b74f83833fdad017] = env->getMethodID(cls, "getSeparation", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble OccultationEngine$OccultationAngles::getLimbRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLimbRadius_b74f83833fdad017]);
      }

      jdouble OccultationEngine$OccultationAngles::getOccultedApparentRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedApparentRadius_b74f83833fdad017]);
      }

      jdouble OccultationEngine$OccultationAngles::getSeparation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSeparation_b74f83833fdad017]);
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
      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$OccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, separation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$OccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$OccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$OccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$OccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$OccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$OccultationAngles, t_OccultationEngine$OccultationAngles, OccultationEngine$OccultationAngles);

      void t_OccultationEngine$OccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$OccultationAngles), &PY_TYPE_DEF(OccultationEngine$OccultationAngles), module, "OccultationEngine$OccultationAngles", 0);
      }

      void t_OccultationEngine$OccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "class_", make_descriptor(OccultationEngine$OccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$OccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$OccultationAngles::wrap_Object(OccultationEngine$OccultationAngles(((t_OccultationEngine$OccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSeparation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSeparation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder.h"
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

            ::java::lang::Class *MessageVersionXmlTokenBuilder::class$ = NULL;
            jmethodID *MessageVersionXmlTokenBuilder::mids$ = NULL;
            bool MessageVersionXmlTokenBuilder::live$ = false;

            jclass MessageVersionXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/MessageVersionXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MessageVersionXmlTokenBuilder::MessageVersionXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::java::util::List MessageVersionXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
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
            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_MessageVersionXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MessageVersionXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MessageVersionXmlTokenBuilder)[] = {
              { Py_tp_methods, t_MessageVersionXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_MessageVersionXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MessageVersionXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MessageVersionXmlTokenBuilder, t_MessageVersionXmlTokenBuilder, MessageVersionXmlTokenBuilder);

            void t_MessageVersionXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(MessageVersionXmlTokenBuilder), &PY_TYPE_DEF(MessageVersionXmlTokenBuilder), module, "MessageVersionXmlTokenBuilder", 0);
            }

            void t_MessageVersionXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "class_", make_descriptor(MessageVersionXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "wrapfn_", make_descriptor(t_MessageVersionXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MessageVersionXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_MessageVersionXmlTokenBuilder::wrap_Object(MessageVersionXmlTokenBuilder(((t_MessageVersionXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_MessageVersionXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MessageVersionXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MessageVersionXmlTokenBuilder_init_(t_MessageVersionXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              MessageVersionXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = MessageVersionXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_MessageVersionXmlTokenBuilder_buildTokens(t_MessageVersionXmlTokenBuilder *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesPhase::class$ = NULL;
          jmethodID *InterSatellitesPhase::mids$ = NULL;
          bool InterSatellitesPhase::live$ = false;
          ::java::lang::String *InterSatellitesPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *InterSatellitesPhase::MEASUREMENT_TYPE = NULL;

          jclass InterSatellitesPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0576086b2ba83da9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/time/AbsoluteDate;DDDD)V");
              mids$[mid_getAmbiguityDriver_a59daa5e273117e1] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_b74f83833fdad017] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhase::InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0576086b2ba83da9, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::utils::ParameterDriver InterSatellitesPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a59daa5e273117e1]));
          }

          jdouble InterSatellitesPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_b74f83833fdad017]);
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
          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args);
          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data);
          static PyGetSetDef t_InterSatellitesPhase__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, wavelength),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhase__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhase)[] = {
            { Py_tp_methods, t_InterSatellitesPhase__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhase_init_ },
            { Py_tp_getset, t_InterSatellitesPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhase, t_InterSatellitesPhase, InterSatellitesPhase);
          PyObject *t_InterSatellitesPhase::wrap_Object(const InterSatellitesPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhase), &PY_TYPE_DEF(InterSatellitesPhase), module, "InterSatellitesPhase", 0);
          }

          void t_InterSatellitesPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "class_", make_descriptor(InterSatellitesPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "wrapfn_", make_descriptor(t_InterSatellitesPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(InterSatellitesPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*InterSatellitesPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhase::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhase::wrap_Object(InterSatellitesPhase(((t_InterSatellitesPhase *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            InterSatellitesPhase object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = InterSatellitesPhase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedZHomothety.h"
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

        ::java::lang::Class *FixedZHomothety::class$ = NULL;
        jmethodID *FixedZHomothety::mids$ = NULL;
        bool FixedZHomothety::live$ = false;

        jclass FixedZHomothety::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedZHomothety");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b7ec643e4edd96c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_23b7762b1a728d4c] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_624b61103e61016a] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedZHomothety::FixedZHomothety(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7ec643e4edd96c5, a0.this$, a1)) {}

        ::java::util::stream::Stream FixedZHomothety::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_23b7762b1a728d4c], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
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
        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self);
        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args);
        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data);
        static PyGetSetDef t_FixedZHomothety__fields_[] = {
          DECLARE_GET_FIELD(t_FixedZHomothety, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedZHomothety__methods_[] = {
          DECLARE_METHOD(t_FixedZHomothety, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedZHomothety, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedZHomothety, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedZHomothety)[] = {
          { Py_tp_methods, t_FixedZHomothety__methods_ },
          { Py_tp_init, (void *) t_FixedZHomothety_init_ },
          { Py_tp_getset, t_FixedZHomothety__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedZHomothety)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedZHomothety, t_FixedZHomothety, FixedZHomothety);

        void t_FixedZHomothety::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedZHomothety), &PY_TYPE_DEF(FixedZHomothety), module, "FixedZHomothety", 0);
        }

        void t_FixedZHomothety::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "class_", make_descriptor(FixedZHomothety::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "wrapfn_", make_descriptor(t_FixedZHomothety::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedZHomothety), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedZHomothety_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedZHomothety::initializeClass, 1)))
            return NULL;
          return t_FixedZHomothety::wrap_Object(FixedZHomothety(((t_FixedZHomothety *) arg)->object.this$));
        }
        static PyObject *t_FixedZHomothety_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedZHomothety::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedZHomothety_init_(t_FixedZHomothety *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          FixedZHomothety object((jobject) NULL);

          if (!parseArgs(args, "sD", &a0, &a1))
          {
            INT_CALL(object = FixedZHomothety(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedZHomothety_getParametersDrivers(t_FixedZHomothety *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedZHomothety_transformLOS(t_FixedZHomothety *self, PyObject *args)
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

        static PyObject *t_FixedZHomothety_get__parametersDrivers(t_FixedZHomothety *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GNSSPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GNSSPropagator::class$ = NULL;
          jmethodID *GNSSPropagator::mids$ = NULL;
          bool GNSSPropagator::live$ = false;

          jclass GNSSPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GNSSPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getECEF_2c51111cc6894ba1] = env->getMethodID(cls, "getECEF", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getECI_2c51111cc6894ba1] = env->getMethodID(cls, "getECI", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_b74f83833fdad017] = env->getMethodID(cls, "getMU", "()D");
              mids$[mid_getOrbitalElements_1c32e5f4c8d2d284] = env->getMethodID(cls, "getOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GNSSOrbitalElements;");
              mids$[mid_propagateInEcef_686d17b8cfdd0634] = env->getMethodID(cls, "propagateInEcef", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/PVCoordinates;");
              mids$[mid_resetInitialState_280c3390961e0a50] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_getMass_fd347811007a6ba3] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_resetIntermediateState_1c47c97cdbc7e206] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_propagateOrbit_5df6dcb5c4123339] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECEF() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECEF_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getECI() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getECI_2c51111cc6894ba1]));
          }

          ::org::orekit::frames::Frame GNSSPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
          }

          jdouble GNSSPropagator::getMU() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMU_b74f83833fdad017]);
          }

          ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements GNSSPropagator::getOrbitalElements() const
          {
            return ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getOrbitalElements_1c32e5f4c8d2d284]));
          }

          ::org::orekit::utils::PVCoordinates GNSSPropagator::propagateInEcef(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_propagateInEcef_686d17b8cfdd0634], a0.this$));
          }

          void GNSSPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_280c3390961e0a50], a0.this$);
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
      namespace analytical {
        namespace gnss {
          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self);
          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg);
          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args);
          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data);
          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data);
          static PyGetSetDef t_GNSSPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_GNSSPropagator, eCEF),
            DECLARE_GET_FIELD(t_GNSSPropagator, eCI),
            DECLARE_GET_FIELD(t_GNSSPropagator, frame),
            DECLARE_GET_FIELD(t_GNSSPropagator, mU),
            DECLARE_GET_FIELD(t_GNSSPropagator, orbitalElements),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GNSSPropagator__methods_[] = {
            DECLARE_METHOD(t_GNSSPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GNSSPropagator, getECEF, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getECI, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_GNSSPropagator, getMU, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, getOrbitalElements, METH_NOARGS),
            DECLARE_METHOD(t_GNSSPropagator, propagateInEcef, METH_O),
            DECLARE_METHOD(t_GNSSPropagator, resetInitialState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GNSSPropagator)[] = {
            { Py_tp_methods, t_GNSSPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GNSSPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GNSSPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(GNSSPropagator, t_GNSSPropagator, GNSSPropagator);

          void t_GNSSPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(GNSSPropagator), &PY_TYPE_DEF(GNSSPropagator), module, "GNSSPropagator", 0);
          }

          void t_GNSSPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "class_", make_descriptor(GNSSPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "wrapfn_", make_descriptor(t_GNSSPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GNSSPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GNSSPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GNSSPropagator::initializeClass, 1)))
              return NULL;
            return t_GNSSPropagator::wrap_Object(GNSSPropagator(((t_GNSSPropagator *) arg)->object.this$));
          }
          static PyObject *t_GNSSPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GNSSPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GNSSPropagator_getECEF(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getECI(t_GNSSPropagator *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_getFrame(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_GNSSPropagator_getMU(t_GNSSPropagator *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GNSSPropagator_getOrbitalElements(t_GNSSPropagator *self)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(result);
          }

          static PyObject *t_GNSSPropagator_propagateInEcef(t_GNSSPropagator *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.propagateInEcef(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateInEcef", arg);
            return NULL;
          }

          static PyObject *t_GNSSPropagator_resetInitialState(t_GNSSPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(GNSSPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_GNSSPropagator_get__eCEF(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECEF());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__eCI(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getECI());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__frame(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_GNSSPropagator_get__mU(t_GNSSPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GNSSPropagator_get__orbitalElements(t_GNSSPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::gnss::data::GNSSOrbitalElements value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitalElements());
            return ::org::orekit::propagation::analytical::gnss::data::t_GNSSOrbitalElements::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile::class$ = NULL;
        jmethodID *STKEphemerisFile::mids$ = NULL;
        bool STKEphemerisFile::live$ = false;

        jclass STKEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_95a45b28b2bbbb14] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/stk/STKEphemerisFile$STKEphemeris;)V");
            mids$[mid_getSTKVersion_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSTKVersion", "()Ljava/lang/String;");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile::STKEphemerisFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95a45b28b2bbbb14, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String STKEphemerisFile::getSTKVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSTKVersion_1c1fa1e935d6cdcf]));
        }

        ::java::util::Map STKEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_810bed48fafb0b9a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data);
        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data);
        static PyGetSetDef t_STKEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile, sTKVersion),
          DECLARE_GET_FIELD(t_STKEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, getSTKVersion, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile)[] = {
          { Py_tp_methods, t_STKEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile_init_ },
          { Py_tp_getset, t_STKEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile, t_STKEphemerisFile, STKEphemerisFile);

        void t_STKEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile), &PY_TYPE_DEF(STKEphemerisFile), module, "STKEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKCoordinateSystem", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemeris", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemerisSegment", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment)));
        }

        void t_STKEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "class_", make_descriptor(STKEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "wrapfn_", make_descriptor(t_STKEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile::wrap_Object(STKEphemerisFile(((t_STKEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris a2((jobject) NULL);
          STKEphemerisFile object((jobject) NULL);

          if (!parseArgs(args, "ssk", ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = STKEphemerisFile(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSTKVersion());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemeris));
        }

        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSTKVersion());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/EulerKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Euler.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *EulerKey::class$ = NULL;
              jmethodID *EulerKey::mids$ = NULL;
              bool EulerKey::live$ = false;
              EulerKey *EulerKey::ANGLE_1 = NULL;
              EulerKey *EulerKey::ANGLE_1_DOT = NULL;
              EulerKey *EulerKey::ANGLE_2 = NULL;
              EulerKey *EulerKey::ANGLE_2_DOT = NULL;
              EulerKey *EulerKey::ANGLE_3 = NULL;
              EulerKey *EulerKey::ANGLE_3_DOT = NULL;
              EulerKey *EulerKey::COMMENT = NULL;
              EulerKey *EulerKey::EULER_DIR = NULL;
              EulerKey *EulerKey::EULER_FRAME_A = NULL;
              EulerKey *EulerKey::EULER_FRAME_B = NULL;
              EulerKey *EulerKey::EULER_ROT_SEQ = NULL;
              EulerKey *EulerKey::RATE_FRAME = NULL;
              EulerKey *EulerKey::REF_FRAME_A = NULL;
              EulerKey *EulerKey::REF_FRAME_B = NULL;
              EulerKey *EulerKey::X_ANGLE = NULL;
              EulerKey *EulerKey::X_RATE = NULL;
              EulerKey *EulerKey::Y_ANGLE = NULL;
              EulerKey *EulerKey::Y_RATE = NULL;
              EulerKey *EulerKey::Z_ANGLE = NULL;
              EulerKey *EulerKey::Z_RATE = NULL;
              EulerKey *EulerKey::rotationAngles = NULL;
              EulerKey *EulerKey::rotationRates = NULL;

              jclass EulerKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/EulerKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_d2c77080af061b2e] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/apm/Euler;)Z");
                  mids$[mid_valueOf_7196adb5e61f0633] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");
                  mids$[mid_values_ccf306637f182922] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ANGLE_1 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_1_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_1_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_2_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_2_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3 = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  ANGLE_3_DOT = new EulerKey(env->getStaticObjectField(cls, "ANGLE_3_DOT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  COMMENT = new EulerKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_DIR = new EulerKey(env->getStaticObjectField(cls, "EULER_DIR", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "EULER_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  EULER_ROT_SEQ = new EulerKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  RATE_FRAME = new EulerKey(env->getStaticObjectField(cls, "RATE_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_A = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  REF_FRAME_B = new EulerKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_ANGLE = new EulerKey(env->getStaticObjectField(cls, "X_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  X_RATE = new EulerKey(env->getStaticObjectField(cls, "X_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Y_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Y_RATE = new EulerKey(env->getStaticObjectField(cls, "Y_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_ANGLE = new EulerKey(env->getStaticObjectField(cls, "Z_ANGLE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  Z_RATE = new EulerKey(env->getStaticObjectField(cls, "Z_RATE", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationAngles = new EulerKey(env->getStaticObjectField(cls, "rotationAngles", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  rotationRates = new EulerKey(env->getStaticObjectField(cls, "rotationRates", "Lorg/orekit/files/ccsds/ndm/adm/apm/EulerKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean EulerKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::apm::Euler & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_d2c77080af061b2e], a0.this$, a1.this$, a2.this$);
              }

              EulerKey EulerKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return EulerKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7196adb5e61f0633], a0.this$));
              }

              JArray< EulerKey > EulerKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< EulerKey >(env->callStaticObjectMethod(cls, mids$[mid_values_ccf306637f182922]));
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
              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args);
              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_EulerKey_values(PyTypeObject *type);
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data);
              static PyGetSetDef t_EulerKey__fields_[] = {
                DECLARE_GET_FIELD(t_EulerKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_EulerKey__methods_[] = {
                DECLARE_METHOD(t_EulerKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, process, METH_VARARGS),
                DECLARE_METHOD(t_EulerKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_EulerKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EulerKey)[] = {
                { Py_tp_methods, t_EulerKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_EulerKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EulerKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(EulerKey, t_EulerKey, EulerKey);
              PyObject *t_EulerKey::wrap_Object(const EulerKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_EulerKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_EulerKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_EulerKey *self = (t_EulerKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_EulerKey::install(PyObject *module)
              {
                installType(&PY_TYPE(EulerKey), &PY_TYPE_DEF(EulerKey), module, "EulerKey", 0);
              }

              void t_EulerKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "class_", make_descriptor(EulerKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "wrapfn_", make_descriptor(t_EulerKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(EulerKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_1_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_1_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_2_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_2_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "ANGLE_3_DOT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::ANGLE_3_DOT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "COMMENT", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_DIR", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_DIR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "EULER_ROT_SEQ", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "RATE_FRAME", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::RATE_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_A", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "REF_FRAME_B", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "X_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::X_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Y_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Y_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_ANGLE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_ANGLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "Z_RATE", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::Z_RATE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationAngles", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationAngles)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EulerKey), "rotationRates", make_descriptor(t_EulerKey::wrap_Object(*EulerKey::rotationRates)));
              }

              static PyObject *t_EulerKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EulerKey::initializeClass, 1)))
                  return NULL;
                return t_EulerKey::wrap_Object(EulerKey(((t_EulerKey *) arg)->object.this$));
              }
              static PyObject *t_EulerKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EulerKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_EulerKey_of_(t_EulerKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_EulerKey_process(t_EulerKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::apm::Euler a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::apm::Euler::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_EulerKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                EulerKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::valueOf(a0));
                  return t_EulerKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_EulerKey_values(PyTypeObject *type)
              {
                JArray< EulerKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::apm::EulerKey::values());
                return JArray<jobject>(result.this$).wrap(t_EulerKey::wrap_jobject);
              }
              static PyObject *t_EulerKey_get__parameters_(t_EulerKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *FieldBracketingNthOrderBrentSolver::class$ = NULL;
        jmethodID *FieldBracketingNthOrderBrentSolver::mids$ = NULL;
        bool FieldBracketingNthOrderBrentSolver::live$ = false;

        jclass FieldBracketingNthOrderBrentSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/FieldBracketingNthOrderBrentSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_acf92559ec8aaacb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getAbsoluteAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getAbsoluteAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getFunctionValueAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMaxEvaluations_55546ef6a647f39b] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMaximalOrder_55546ef6a647f39b] = env->getMethodID(cls, "getMaximalOrder", "()I");
            mids$[mid_getRelativeAccuracy_81520b552cb3fa26] = env->getMethodID(cls, "getRelativeAccuracy", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_274432d986e24d18] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solve_1274323488150eef] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/solvers/AllowedSolution;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_solveInterval_01108cb21dc9897d] = env->getMethodID(cls, "solveInterval", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver$Interval;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldBracketingNthOrderBrentSolver::FieldBracketingNthOrderBrentSolver(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_acf92559ec8aaacb, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getAbsoluteAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbsoluteAccuracy_81520b552cb3fa26]));
        }

        jint FieldBracketingNthOrderBrentSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getFunctionValueAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFunctionValueAccuracy_81520b552cb3fa26]));
        }

        jint FieldBracketingNthOrderBrentSolver::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_55546ef6a647f39b]);
        }

        jint FieldBracketingNthOrderBrentSolver::getMaximalOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalOrder_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::getRelativeAccuracy() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRelativeAccuracy_81520b552cb3fa26]));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::analysis::solvers::AllowedSolution & a4) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_274432d986e24d18], a0, a1.this$, a2.this$, a3.this$, a4.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldBracketingNthOrderBrentSolver::solve(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::analysis::solvers::AllowedSolution & a5) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_solve_1274323488150eef], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval FieldBracketingNthOrderBrentSolver::solveInterval(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval(env->callObjectMethod(this$, mids$[mid_solveInterval_01108cb21dc9897d], a0, a1.this$, a2.this$, a3.this$, a4.this$));
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
      namespace solvers {
        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data);
        static PyGetSetDef t_FieldBracketingNthOrderBrentSolver__fields_[] = {
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, evaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, functionValueAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maxEvaluations),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, maximalOrder),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldBracketingNthOrderBrentSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldBracketingNthOrderBrentSolver__methods_[] = {
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getFunctionValueAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getMaximalOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solve, METH_VARARGS),
          DECLARE_METHOD(t_FieldBracketingNthOrderBrentSolver, solveInterval, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldBracketingNthOrderBrentSolver)[] = {
          { Py_tp_methods, t_FieldBracketingNthOrderBrentSolver__methods_ },
          { Py_tp_init, (void *) t_FieldBracketingNthOrderBrentSolver_init_ },
          { Py_tp_getset, t_FieldBracketingNthOrderBrentSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldBracketingNthOrderBrentSolver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldBracketingNthOrderBrentSolver, t_FieldBracketingNthOrderBrentSolver, FieldBracketingNthOrderBrentSolver);
        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_Object(const FieldBracketingNthOrderBrentSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldBracketingNthOrderBrentSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldBracketingNthOrderBrentSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldBracketingNthOrderBrentSolver *self = (t_FieldBracketingNthOrderBrentSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldBracketingNthOrderBrentSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldBracketingNthOrderBrentSolver), &PY_TYPE_DEF(FieldBracketingNthOrderBrentSolver), module, "FieldBracketingNthOrderBrentSolver", 0);
        }

        void t_FieldBracketingNthOrderBrentSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "class_", make_descriptor(FieldBracketingNthOrderBrentSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "wrapfn_", make_descriptor(t_FieldBracketingNthOrderBrentSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBracketingNthOrderBrentSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 1)))
            return NULL;
          return t_FieldBracketingNthOrderBrentSolver::wrap_Object(FieldBracketingNthOrderBrentSolver(((t_FieldBracketingNthOrderBrentSolver *) arg)->object.this$));
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldBracketingNthOrderBrentSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_of_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldBracketingNthOrderBrentSolver_init_(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jint a3;
          FieldBracketingNthOrderBrentSolver object((jobject) NULL);

          if (!parseArgs(args, "KKKI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
          {
            INT_CALL(object = FieldBracketingNthOrderBrentSolver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getAbsoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getFunctionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFunctionValueAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaxEvaluations(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getMaximalOrder(t_FieldBracketingNthOrderBrentSolver *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_getRelativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solve(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::analysis::solvers::AllowedSolution a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              jint a0;
              ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::analysis::solvers::AllowedSolution a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IKKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
              {
                OBJ_CALL(result = self->object.solve(a0, a1, a2, a3, a4, a5));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "solve", args);
          return NULL;
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_solveInterval(t_FieldBracketingNthOrderBrentSolver *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver$Interval result((jobject) NULL);

          if (!parseArgs(args, "IKKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.solveInterval(a0, a1, a2, a3, a4));
            return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver$Interval::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "solveInterval", args);
          return NULL;
        }
        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__parameters_(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__absoluteAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__evaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__functionValueAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFunctionValueAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maxEvaluations(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__maximalOrder(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldBracketingNthOrderBrentSolver_get__relativeAccuracy(t_FieldBracketingNthOrderBrentSolver *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *SatelliteClockScale::class$ = NULL;
      jmethodID *SatelliteClockScale::mids$ = NULL;
      bool SatelliteClockScale::live$ = false;

      jclass SatelliteClockScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/SatelliteClockScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8758d42b4c12e1cc] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;DD)V");
          mids$[mid_countAtDate_fd347811007a6ba3] = env->getMethodID(cls, "countAtDate", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_dateAtCount_f359a0110559347a] = env->getMethodID(cls, "dateAtCount", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e7a49f02c43fd893] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatelliteClockScale::SatelliteClockScale(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::TimeScale & a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8758d42b4c12e1cc, a0.this$, a1.this$, a2.this$, a3, a4)) {}

      jdouble SatelliteClockScale::countAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_countAtDate_fd347811007a6ba3], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate SatelliteClockScale::dateAtCount(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateAtCount_f359a0110559347a], a0));
      }

      ::java::lang::String SatelliteClockScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      jdouble SatelliteClockScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e7a49f02c43fd893], a0.this$, a1.this$);
      }

      ::java::lang::String SatelliteClockScale::toString() const
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
    namespace time {
      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self);
      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data);
      static PyGetSetDef t_SatelliteClockScale__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteClockScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteClockScale__methods_[] = {
        DECLARE_METHOD(t_SatelliteClockScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, countAtDate, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, dateAtCount, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteClockScale)[] = {
        { Py_tp_methods, t_SatelliteClockScale__methods_ },
        { Py_tp_init, (void *) t_SatelliteClockScale_init_ },
        { Py_tp_getset, t_SatelliteClockScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteClockScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatelliteClockScale, t_SatelliteClockScale, SatelliteClockScale);

      void t_SatelliteClockScale::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteClockScale), &PY_TYPE_DEF(SatelliteClockScale), module, "SatelliteClockScale", 0);
      }

      void t_SatelliteClockScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "class_", make_descriptor(SatelliteClockScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "wrapfn_", make_descriptor(t_SatelliteClockScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteClockScale::initializeClass, 1)))
          return NULL;
        return t_SatelliteClockScale::wrap_Object(SatelliteClockScale(((t_SatelliteClockScale *) arg)->object.this$));
      }
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteClockScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        SatelliteClockScale object((jobject) NULL);

        if (!parseArgs(args, "skkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SatelliteClockScale(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.countAtDate(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "countAtDate", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.dateAtCount(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dateAtCount", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SatelliteClockScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data)
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
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *EnumeratedRealDistribution::class$ = NULL;
        jmethodID *EnumeratedRealDistribution::mids$ = NULL;
        bool EnumeratedRealDistribution::live$ = false;

        jclass EnumeratedRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/EnumeratedRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab69da052b88f50c] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_e62d3bb06d56d7e3] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_04fd0666b613d2ab] = env->getMethodID(cls, "probability", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab69da052b88f50c, a0.this$)) {}

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

        jdouble EnumeratedRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble EnumeratedRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble EnumeratedRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble EnumeratedRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        ::java::util::List EnumeratedRealDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_e62d3bb06d56d7e3]));
        }

        jdouble EnumeratedRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble EnumeratedRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jdouble EnumeratedRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_04fd0666b613d2ab], a0);
        }

        jboolean EnumeratedRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble EnumeratedRealDistribution::probability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_04fd0666b613d2ab], a0);
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
        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self);
        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedRealDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedRealDistribution)[] = {
          { Py_tp_methods, t_EnumeratedRealDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedRealDistribution_init_ },
          { Py_tp_getset, t_EnumeratedRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedRealDistribution, t_EnumeratedRealDistribution, EnumeratedRealDistribution);

        void t_EnumeratedRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedRealDistribution), &PY_TYPE_DEF(EnumeratedRealDistribution), module, "EnumeratedRealDistribution", 0);
        }

        void t_EnumeratedRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "class_", make_descriptor(EnumeratedRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "wrapfn_", make_descriptor(t_EnumeratedRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedRealDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedRealDistribution::wrap_Object(EnumeratedRealDistribution(((t_EnumeratedRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0, a1));
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

        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data)
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
#include "org/hipparchus/linear/IterativeLinearSolver.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolver::class$ = NULL;
      jmethodID *IterativeLinearSolver::mids$ = NULL;
      bool IterativeLinearSolver::live$ = false;

      jclass IterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c5c01059ddc6554a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_getIterationManager_1ef5960453e107b4] = env->getMethodID(cls, "getIterationManager", "()Lorg/hipparchus/util/IterationManager;");
          mids$[mid_solve_756296b1f68e7038] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_8e7f7f43cd6eb914] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_8e7f7f43cd6eb914] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_93a6361f42495c67] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolver::IterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c5c01059ddc6554a, a0.this$)) {}

      IterativeLinearSolver::IterativeLinearSolver(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      ::org::hipparchus::util::IterationManager IterativeLinearSolver::getIterationManager() const
      {
        return ::org::hipparchus::util::IterationManager(env->callObjectMethod(this$, mids$[mid_getIterationManager_1ef5960453e107b4]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_756296b1f68e7038], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_8e7f7f43cd6eb914], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self);
      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args);
      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data);
      static PyGetSetDef t_IterativeLinearSolver__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolver, iterationManager),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolver, getIterationManager, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_IterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolver)[] = {
        { Py_tp_methods, t_IterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolver_init_ },
        { Py_tp_getset, t_IterativeLinearSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolver, t_IterativeLinearSolver, IterativeLinearSolver);

      void t_IterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolver), &PY_TYPE_DEF(IterativeLinearSolver), module, "IterativeLinearSolver", 0);
      }

      void t_IterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "class_", make_descriptor(IterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "wrapfn_", make_descriptor(t_IterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolver::wrap_Object(IterativeLinearSolver(((t_IterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolver_init_(t_IterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            IterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = IterativeLinearSolver(a0));
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

      static PyObject *t_IterativeLinearSolver_getIterationManager(t_IterativeLinearSolver *self)
      {
        ::org::hipparchus::util::IterationManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolver_solve(t_IterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_solveInPlace(t_IterativeLinearSolver *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "solveInPlace", args);
        return NULL;
      }

      static PyObject *t_IterativeLinearSolver_get__iterationManager(t_IterativeLinearSolver *self, void *data)
      {
        ::org::hipparchus::util::IterationManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getIterationManager());
        return ::org::hipparchus::util::t_IterationManager::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9bd1e5be25a29826] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;)V");
          mids$[mid_init$_df6854e24a884d37] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getMaxDate_c325492395d89b24] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_c325492395d89b24] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPVCoordinates_e5d15ef236cd9ffe] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_42ef2ff6aede2782] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9bd1e5be25a29826, a0.this$)) {}

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_df6854e24a884d37, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_c325492395d89b24]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_e5d15ef236cd9ffe], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AggregatedPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_42ef2ff6aede2782], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_AggregatedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregatedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_AggregatedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider, t_AggregatedPVCoordinatesProvider, AggregatedPVCoordinatesProvider);

      void t_AggregatedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider), module, "AggregatedPVCoordinatesProvider", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "InvalidPVProvider", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "Builder", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder)));
      }

      void t_AggregatedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider::wrap_Object(AggregatedPVCoordinatesProvider(((t_AggregatedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0, a1, a2));
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointValuePair::class$ = NULL;
      jmethodID *PointValuePair::mids$ = NULL;
      bool PointValuePair::live$ = false;

      jclass PointValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_334f245ec9cee46b] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_112347971cfc93d9] = env->getMethodID(cls, "<init>", "([DDZ)V");
          mids$[mid_getPoint_25e1757a36c4dde2] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_25e1757a36c4dde2] = env->getMethodID(cls, "getPointRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_334f245ec9cee46b, a0.this$, a1)) {}

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_112347971cfc93d9, a0.this$, a1, a2)) {}

      JArray< jdouble > PointValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_25e1757a36c4dde2]));
      }

      JArray< jdouble > PointValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_25e1757a36c4dde2]));
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
      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args);
      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self);
      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self);
      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data);
      static PyGetSetDef t_PointValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointValuePair, point),
        DECLARE_GET_FIELD(t_PointValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointValuePair__methods_[] = {
        DECLARE_METHOD(t_PointValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointValuePair, getPointRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointValuePair)[] = {
        { Py_tp_methods, t_PointValuePair__methods_ },
        { Py_tp_init, (void *) t_PointValuePair_init_ },
        { Py_tp_getset, t_PointValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointValuePair, t_PointValuePair, PointValuePair);
      PyObject *t_PointValuePair::wrap_Object(const PointValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointValuePair), &PY_TYPE_DEF(PointValuePair), module, "PointValuePair", 0);
      }

      void t_PointValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "class_", make_descriptor(PointValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "wrapfn_", make_descriptor(t_PointValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointValuePair::initializeClass, 1)))
          return NULL;
        return t_PointValuePair::wrap_Object(PointValuePair(((t_PointValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = PointValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
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

      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Binary64.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/Binary64.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Binary64::class$ = NULL;
      jmethodID *Binary64::mids$ = NULL;
      bool Binary64::live$ = false;
      Binary64 *Binary64::NAN$ = NULL;
      Binary64 *Binary64::NEGATIVE_INFINITY = NULL;
      Binary64 *Binary64::ONE = NULL;
      Binary64 *Binary64::PI = NULL;
      Binary64 *Binary64::POSITIVE_INFINITY = NULL;
      Binary64 *Binary64::ZERO = NULL;

      jclass Binary64::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Binary64");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_abs_08945ef61eb92dcf] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acos_08945ef61eb92dcf] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_acosh_08945ef61eb92dcf] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_b2e3f0d81354ebf5] = env->getMethodID(cls, "add", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_add_5feb6ca04f03c84e] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_asin_08945ef61eb92dcf] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_asinh_08945ef61eb92dcf] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan_08945ef61eb92dcf] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_atan2_b2e3f0d81354ebf5] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_atanh_08945ef61eb92dcf] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
          mids$[mid_cbrt_08945ef61eb92dcf] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_ceil_08945ef61eb92dcf] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_compareTo_f7ae5b52be80885c] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/util/Binary64;)I");
          mids$[mid_copySign_b2e3f0d81354ebf5] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_copySign_5feb6ca04f03c84e] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_cos_08945ef61eb92dcf] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_cosh_08945ef61eb92dcf] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_b2e3f0d81354ebf5] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_divide_5feb6ca04f03c84e] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_08945ef61eb92dcf] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_expm1_08945ef61eb92dcf] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_floor_08945ef61eb92dcf] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_08945ef61eb92dcf] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_getReal_b74f83833fdad017] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_b2e3f0d81354ebf5] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_9ab94ac1dc23b105] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_d9cbe309752671b2] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_bee3e3a7388fa091] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/util/Binary64;[Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_b2ec8914a1925d84] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_ee4e81d4c14bea8f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_9692d0b334031822] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_5685ff926b80598f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_da9a0600a76d7448] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_linearCombination_11eae0d76e710d8d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;DLorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_log_08945ef61eb92dcf] = env->getMethodID(cls, "log", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log10_08945ef61eb92dcf] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_log1p_08945ef61eb92dcf] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_b2e3f0d81354ebf5] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_5feb6ca04f03c84e] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_multiply_9b1d59637c097695] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_negate_08945ef61eb92dcf] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_newInstance_5feb6ca04f03c84e] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_b2e3f0d81354ebf5] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_5feb6ca04f03c84e] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_pow_9b1d59637c097695] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_reciprocal_08945ef61eb92dcf] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_b2e3f0d81354ebf5] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_remainder_5feb6ca04f03c84e] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_rint_08945ef61eb92dcf] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_rootN_9b1d59637c097695] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_scalb_9b1d59637c097695] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/util/Binary64;");
          mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
          mids$[mid_sign_08945ef61eb92dcf] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sin_08945ef61eb92dcf] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinCos_e434dd780193da2f] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_08945ef61eb92dcf] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_sinhCosh_4a1e2142f3481995] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_08945ef61eb92dcf] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_b2e3f0d81354ebf5] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/util/Binary64;)Lorg/hipparchus/util/Binary64;");
          mids$[mid_subtract_5feb6ca04f03c84e] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/util/Binary64;");
          mids$[mid_tan_08945ef61eb92dcf] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_tanh_08945ef61eb92dcf] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toDegrees_08945ef61eb92dcf] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toRadians_08945ef61eb92dcf] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/util/Binary64;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_08945ef61eb92dcf] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/util/Binary64;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NAN$ = new Binary64(env->getStaticObjectField(cls, "NAN", "Lorg/hipparchus/util/Binary64;"));
          NEGATIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ONE = new Binary64(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/util/Binary64;"));
          PI = new Binary64(env->getStaticObjectField(cls, "PI", "Lorg/hipparchus/util/Binary64;"));
          POSITIVE_INFINITY = new Binary64(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/util/Binary64;"));
          ZERO = new Binary64(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/util/Binary64;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Binary64::Binary64(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      Binary64 Binary64::abs() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_abs_08945ef61eb92dcf]));
      }

      Binary64 Binary64::acos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acos_08945ef61eb92dcf]));
      }

      Binary64 Binary64::acosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_acosh_08945ef61eb92dcf]));
      }

      Binary64 Binary64::add(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::add(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_add_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::asin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asin_08945ef61eb92dcf]));
      }

      Binary64 Binary64::asinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_asinh_08945ef61eb92dcf]));
      }

      Binary64 Binary64::atan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan_08945ef61eb92dcf]));
      }

      Binary64 Binary64::atan2(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atan2_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::atanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_atanh_08945ef61eb92dcf]));
      }

      jbyte Binary64::byteValue() const
      {
        return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
      }

      Binary64 Binary64::cbrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cbrt_08945ef61eb92dcf]));
      }

      Binary64 Binary64::ceil() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ceil_08945ef61eb92dcf]));
      }

      jint Binary64::compareTo(const Binary64 & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_f7ae5b52be80885c], a0.this$);
      }

      Binary64 Binary64::copySign(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::copySign(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_copySign_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::cos() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cos_08945ef61eb92dcf]));
      }

      Binary64 Binary64::cosh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_cosh_08945ef61eb92dcf]));
      }

      Binary64 Binary64::divide(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::divide(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_divide_5feb6ca04f03c84e], a0));
      }

      jdouble Binary64::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
      }

      jboolean Binary64::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      Binary64 Binary64::exp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_exp_08945ef61eb92dcf]));
      }

      Binary64 Binary64::expm1() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_expm1_08945ef61eb92dcf]));
      }

      jfloat Binary64::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
      }

      Binary64 Binary64::floor() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_floor_08945ef61eb92dcf]));
      }

      ::org::hipparchus::Field Binary64::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      Binary64 Binary64::getPi() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_getPi_08945ef61eb92dcf]));
      }

      jdouble Binary64::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_b74f83833fdad017]);
      }

      jint Binary64::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      Binary64 Binary64::hypot(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_hypot_b2e3f0d81354ebf5], a0.this$));
      }

      jint Binary64::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
      }

      jboolean Binary64::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
      }

      jboolean Binary64::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
      }

      jboolean Binary64::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_9ab94ac1dc23b105]);
      }

      Binary64 Binary64::linearCombination(const JArray< jdouble > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_d9cbe309752671b2], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const JArray< Binary64 > & a0, const JArray< Binary64 > & a1) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_bee3e3a7388fa091], a0.this$, a1.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_b2ec8914a1925d84], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_ee4e81d4c14bea8f], a0, a1.this$, a2, a3.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_9692d0b334031822], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_5685ff926b80598f], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Binary64 Binary64::linearCombination(const Binary64 & a0, const Binary64 & a1, const Binary64 & a2, const Binary64 & a3, const Binary64 & a4, const Binary64 & a5, const Binary64 & a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_da9a0600a76d7448], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Binary64 Binary64::linearCombination(jdouble a0, const Binary64 & a1, jdouble a2, const Binary64 & a3, jdouble a4, const Binary64 & a5, jdouble a6, const Binary64 & a7) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_linearCombination_11eae0d76e710d8d], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Binary64 Binary64::log() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log_08945ef61eb92dcf]));
      }

      Binary64 Binary64::log10() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log10_08945ef61eb92dcf]));
      }

      Binary64 Binary64::log1p() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_log1p_08945ef61eb92dcf]));
      }

      jlong Binary64::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
      }

      Binary64 Binary64::multiply(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::multiply(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::multiply(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_multiply_9b1d59637c097695], a0));
      }

      Binary64 Binary64::negate() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_negate_08945ef61eb92dcf]));
      }

      Binary64 Binary64::newInstance(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_newInstance_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::pow(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::pow(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::pow(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_pow_9b1d59637c097695], a0));
      }

      Binary64 Binary64::reciprocal() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_reciprocal_08945ef61eb92dcf]));
      }

      Binary64 Binary64::remainder(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::remainder(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_remainder_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::rint() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rint_08945ef61eb92dcf]));
      }

      Binary64 Binary64::rootN(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_rootN_9b1d59637c097695], a0));
      }

      Binary64 Binary64::scalb(jint a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_scalb_9b1d59637c097695], a0));
      }

      jshort Binary64::shortValue() const
      {
        return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
      }

      Binary64 Binary64::sign() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sign_08945ef61eb92dcf]));
      }

      Binary64 Binary64::sin() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sin_08945ef61eb92dcf]));
      }

      ::org::hipparchus::util::FieldSinCos Binary64::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_e434dd780193da2f]));
      }

      Binary64 Binary64::sinh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sinh_08945ef61eb92dcf]));
      }

      ::org::hipparchus::util::FieldSinhCosh Binary64::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_4a1e2142f3481995]));
      }

      Binary64 Binary64::sqrt() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_sqrt_08945ef61eb92dcf]));
      }

      Binary64 Binary64::subtract(const Binary64 & a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_b2e3f0d81354ebf5], a0.this$));
      }

      Binary64 Binary64::subtract(jdouble a0) const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_subtract_5feb6ca04f03c84e], a0));
      }

      Binary64 Binary64::tan() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tan_08945ef61eb92dcf]));
      }

      Binary64 Binary64::tanh() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_tanh_08945ef61eb92dcf]));
      }

      Binary64 Binary64::toDegrees() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toDegrees_08945ef61eb92dcf]));
      }

      Binary64 Binary64::toRadians() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_toRadians_08945ef61eb92dcf]));
      }

      ::java::lang::String Binary64::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      Binary64 Binary64::ulp() const
      {
        return Binary64(env->callObjectMethod(this$, mids$[mid_ulp_08945ef61eb92dcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Binary64_abs(t_Binary64 *self);
      static PyObject *t_Binary64_acos(t_Binary64 *self);
      static PyObject *t_Binary64_acosh(t_Binary64 *self);
      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_asin(t_Binary64 *self);
      static PyObject *t_Binary64_asinh(t_Binary64 *self);
      static PyObject *t_Binary64_atan(t_Binary64 *self);
      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_atanh(t_Binary64 *self);
      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cbrt(t_Binary64 *self);
      static PyObject *t_Binary64_ceil(t_Binary64 *self);
      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_cos(t_Binary64 *self);
      static PyObject *t_Binary64_cosh(t_Binary64 *self);
      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_exp(t_Binary64 *self);
      static PyObject *t_Binary64_expm1(t_Binary64 *self);
      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_floor(t_Binary64 *self);
      static PyObject *t_Binary64_getField(t_Binary64 *self);
      static PyObject *t_Binary64_getPi(t_Binary64 *self);
      static PyObject *t_Binary64_getReal(t_Binary64 *self);
      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_isInfinite(t_Binary64 *self);
      static PyObject *t_Binary64_isNaN(t_Binary64 *self);
      static PyObject *t_Binary64_isZero(t_Binary64 *self);
      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_log(t_Binary64 *self);
      static PyObject *t_Binary64_log10(t_Binary64 *self);
      static PyObject *t_Binary64_log1p(t_Binary64 *self);
      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_negate(t_Binary64 *self);
      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_reciprocal(t_Binary64 *self);
      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_rint(t_Binary64 *self);
      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg);
      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_sign(t_Binary64 *self);
      static PyObject *t_Binary64_sin(t_Binary64 *self);
      static PyObject *t_Binary64_sinCos(t_Binary64 *self);
      static PyObject *t_Binary64_sinh(t_Binary64 *self);
      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self);
      static PyObject *t_Binary64_sqrt(t_Binary64 *self);
      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_tan(t_Binary64 *self);
      static PyObject *t_Binary64_tanh(t_Binary64 *self);
      static PyObject *t_Binary64_toDegrees(t_Binary64 *self);
      static PyObject *t_Binary64_toRadians(t_Binary64 *self);
      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args);
      static PyObject *t_Binary64_ulp(t_Binary64 *self);
      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data);
      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data);
      static PyGetSetDef t_Binary64__fields_[] = {
        DECLARE_GET_FIELD(t_Binary64, field),
        DECLARE_GET_FIELD(t_Binary64, infinite),
        DECLARE_GET_FIELD(t_Binary64, naN),
        DECLARE_GET_FIELD(t_Binary64, pi),
        DECLARE_GET_FIELD(t_Binary64, real),
        DECLARE_GET_FIELD(t_Binary64, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Binary64__methods_[] = {
        DECLARE_METHOD(t_Binary64, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Binary64, abs, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, add, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, asin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, atan2, METH_O),
        DECLARE_METHOD(t_Binary64, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, byteValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, compareTo, METH_O),
        DECLARE_METHOD(t_Binary64, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, cos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, divide, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, equals, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, exp, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, floor, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getField, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, hypot, METH_O),
        DECLARE_METHOD(t_Binary64, intValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, log, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log10, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, longValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, negate, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, newInstance, METH_O),
        DECLARE_METHOD(t_Binary64, pow, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, rint, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, rootN, METH_O),
        DECLARE_METHOD(t_Binary64, scalb, METH_O),
        DECLARE_METHOD(t_Binary64, shortValue, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, sign, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sin, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, tan, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Binary64, toString, METH_VARARGS),
        DECLARE_METHOD(t_Binary64, ulp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Binary64)[] = {
        { Py_tp_methods, t_Binary64__methods_ },
        { Py_tp_init, (void *) t_Binary64_init_ },
        { Py_tp_getset, t_Binary64__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Binary64)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(Binary64, t_Binary64, Binary64);

      void t_Binary64::install(PyObject *module)
      {
        installType(&PY_TYPE(Binary64), &PY_TYPE_DEF(Binary64), module, "Binary64", 0);
      }

      void t_Binary64::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "class_", make_descriptor(Binary64::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "wrapfn_", make_descriptor(t_Binary64::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "boxfn_", make_descriptor(boxObject));
        env->getClass(Binary64::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NAN", make_descriptor(t_Binary64::wrap_Object(*Binary64::NAN$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "NEGATIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::NEGATIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ONE", make_descriptor(t_Binary64::wrap_Object(*Binary64::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "PI", make_descriptor(t_Binary64::wrap_Object(*Binary64::PI)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "POSITIVE_INFINITY", make_descriptor(t_Binary64::wrap_Object(*Binary64::POSITIVE_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Binary64), "ZERO", make_descriptor(t_Binary64::wrap_Object(*Binary64::ZERO)));
      }

      static PyObject *t_Binary64_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Binary64::initializeClass, 1)))
          return NULL;
        return t_Binary64::wrap_Object(Binary64(((t_Binary64 *) arg)->object.this$));
      }
      static PyObject *t_Binary64_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Binary64::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Binary64_init_(t_Binary64 *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        Binary64 object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = Binary64(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Binary64_abs(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_acosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_add(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Binary64_asin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_asinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_atan2(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Binary64_atanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_byteValue(t_Binary64 *self, PyObject *args)
      {
        jbyte result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.byteValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "byteValue", args, 2);
      }

      static PyObject *t_Binary64_cbrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_ceil(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_compareTo(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_Binary64_copySign(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Binary64_cos(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_cosh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_divide(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Binary64_doubleValue(t_Binary64 *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_Binary64_equals(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Binary64_exp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_expm1(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_floatValue(t_Binary64 *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_Binary64_floor(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getField(t_Binary64 *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_getPi(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_getReal(t_Binary64 *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Binary64_hashCode(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Binary64_hypot(t_Binary64 *self, PyObject *arg)
      {
        Binary64 a0((jobject) NULL);
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "k", Binary64::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Binary64_intValue(t_Binary64 *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_Binary64_isInfinite(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isNaN(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_isZero(t_Binary64 *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Binary64_linearCombination(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            JArray< Binary64 > a0((jobject) NULL);
            JArray< Binary64 > a1((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Binary64::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Binary64 a0((jobject) NULL);
            Binary64 a1((jobject) NULL);
            Binary64 a2((jobject) NULL);
            Binary64 a3((jobject) NULL);
            Binary64 a4((jobject) NULL);
            Binary64 a5((jobject) NULL);
            Binary64 a6((jobject) NULL);
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 a1((jobject) NULL);
            jdouble a2;
            Binary64 a3((jobject) NULL);
            jdouble a4;
            Binary64 a5((jobject) NULL);
            jdouble a6;
            Binary64 a7((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, Binary64::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Binary64_log(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log10(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_log1p(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_longValue(t_Binary64 *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_Binary64_multiply(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Binary64_negate(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_newInstance(t_Binary64 *self, PyObject *arg)
      {
        jdouble a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_Binary64_pow(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jint a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Binary64_reciprocal(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_remainder(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Binary64_rint(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_rootN(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Binary64_scalb(t_Binary64 *self, PyObject *arg)
      {
        jint a0;
        Binary64 result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Binary64::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Binary64_shortValue(t_Binary64 *self, PyObject *args)
      {
        jshort result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.shortValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "shortValue", args, 2);
      }

      static PyObject *t_Binary64_sign(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sin(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinCos(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sinh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_sinhCosh(t_Binary64 *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(Binary64));
      }

      static PyObject *t_Binary64_sqrt(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_subtract(t_Binary64 *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Binary64 a0((jobject) NULL);
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "k", Binary64::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Binary64 result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Binary64::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Binary64_tan(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_tanh(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toDegrees(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toRadians(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_toString(t_Binary64 *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Binary64), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Binary64_ulp(t_Binary64 *self)
      {
        Binary64 result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Binary64::wrap_Object(result);
      }

      static PyObject *t_Binary64_get__field(t_Binary64 *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__infinite(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__naN(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Binary64_get__pi(t_Binary64 *self, void *data)
      {
        Binary64 value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Binary64::wrap_Object(value);
      }

      static PyObject *t_Binary64_get__real(t_Binary64 *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Binary64_get__zero(t_Binary64 *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Double.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *AstronomicalAmplitudeReader::class$ = NULL;
          jmethodID *AstronomicalAmplitudeReader::mids$ = NULL;
          bool AstronomicalAmplitudeReader::live$ = false;

          jclass AstronomicalAmplitudeReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0e025e3b8a9e25ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIID)V");
              mids$[mid_getAstronomicalAmplitudesMap_810bed48fafb0b9a] = env->getMethodID(cls, "getAstronomicalAmplitudesMap", "()Ljava/util/Map;");
              mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AstronomicalAmplitudeReader::AstronomicalAmplitudeReader(const ::java::lang::String & a0, jint a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e025e3b8a9e25ae, a0.this$, a1, a2, a3, a4)) {}

          ::java::util::Map AstronomicalAmplitudeReader::getAstronomicalAmplitudesMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAstronomicalAmplitudesMap_810bed48fafb0b9a]));
          }

          ::java::lang::String AstronomicalAmplitudeReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
          }

          void AstronomicalAmplitudeReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }

          jboolean AstronomicalAmplitudeReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
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
          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args);
          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data);
          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data);
          static PyGetSetDef t_AstronomicalAmplitudeReader__fields_[] = {
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, astronomicalAmplitudesMap),
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AstronomicalAmplitudeReader__methods_[] = {
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getAstronomicalAmplitudesMap, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AstronomicalAmplitudeReader)[] = {
            { Py_tp_methods, t_AstronomicalAmplitudeReader__methods_ },
            { Py_tp_init, (void *) t_AstronomicalAmplitudeReader_init_ },
            { Py_tp_getset, t_AstronomicalAmplitudeReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AstronomicalAmplitudeReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AstronomicalAmplitudeReader, t_AstronomicalAmplitudeReader, AstronomicalAmplitudeReader);

          void t_AstronomicalAmplitudeReader::install(PyObject *module)
          {
            installType(&PY_TYPE(AstronomicalAmplitudeReader), &PY_TYPE_DEF(AstronomicalAmplitudeReader), module, "AstronomicalAmplitudeReader", 0);
          }

          void t_AstronomicalAmplitudeReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "class_", make_descriptor(AstronomicalAmplitudeReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "wrapfn_", make_descriptor(t_AstronomicalAmplitudeReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 1)))
              return NULL;
            return t_AstronomicalAmplitudeReader::wrap_Object(AstronomicalAmplitudeReader(((t_AstronomicalAmplitudeReader *) arg)->object.this$));
          }
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jdouble a4;
            AstronomicalAmplitudeReader object((jobject) NULL);

            if (!parseArgs(args, "sIIID", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AstronomicalAmplitudeReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils$FieldSumAndResidual::class$ = NULL;
      jmethodID *MathUtils$FieldSumAndResidual::mids$ = NULL;
      bool MathUtils$FieldSumAndResidual::live$ = false;

      jclass MathUtils$FieldSumAndResidual::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils$FieldSumAndResidual");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getResidual_2ff8de927fda4153] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getSum_2ff8de927fda4153] = env->getMethodID(cls, "getSum", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getResidual() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getResidual_2ff8de927fda4153]));
      }

      ::org::hipparchus::FieldElement MathUtils$FieldSumAndResidual::getSum() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getSum_2ff8de927fda4153]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args);
      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data);
      static PyGetSetDef t_MathUtils$FieldSumAndResidual__fields_[] = {
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, residual),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, sum),
        DECLARE_GET_FIELD(t_MathUtils$FieldSumAndResidual, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MathUtils$FieldSumAndResidual__methods_[] = {
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, of_, METH_VARARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_MathUtils$FieldSumAndResidual, getSum, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils$FieldSumAndResidual)[] = {
        { Py_tp_methods, t_MathUtils$FieldSumAndResidual__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MathUtils$FieldSumAndResidual__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils$FieldSumAndResidual)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils$FieldSumAndResidual, t_MathUtils$FieldSumAndResidual, MathUtils$FieldSumAndResidual);
      PyObject *t_MathUtils$FieldSumAndResidual::wrap_Object(const MathUtils$FieldSumAndResidual& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MathUtils$FieldSumAndResidual::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MathUtils$FieldSumAndResidual::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MathUtils$FieldSumAndResidual *self = (t_MathUtils$FieldSumAndResidual *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MathUtils$FieldSumAndResidual::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils$FieldSumAndResidual), &PY_TYPE_DEF(MathUtils$FieldSumAndResidual), module, "MathUtils$FieldSumAndResidual", 0);
      }

      void t_MathUtils$FieldSumAndResidual::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "class_", make_descriptor(MathUtils$FieldSumAndResidual::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "wrapfn_", make_descriptor(t_MathUtils$FieldSumAndResidual::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils$FieldSumAndResidual), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 1)))
          return NULL;
        return t_MathUtils$FieldSumAndResidual::wrap_Object(MathUtils$FieldSumAndResidual(((t_MathUtils$FieldSumAndResidual *) arg)->object.this$));
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils$FieldSumAndResidual::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_of_(t_MathUtils$FieldSumAndResidual *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getResidual(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_getSum(t_MathUtils$FieldSumAndResidual *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSum());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_MathUtils$FieldSumAndResidual_get__parameters_(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__residual(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_MathUtils$FieldSumAndResidual_get__sum(t_MathUtils$FieldSumAndResidual *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSum());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *NarrowLaneCombination::class$ = NULL;
          jmethodID *NarrowLaneCombination::mids$ = NULL;
          bool NarrowLaneCombination::live$ = false;

          jclass NarrowLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/NarrowLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_67abdaf53ea90950] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_7bbbdc452eac601c] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_NarrowLaneCombination__methods_[] = {
            DECLARE_METHOD(t_NarrowLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NarrowLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NarrowLaneCombination)[] = {
            { Py_tp_methods, t_NarrowLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NarrowLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(NarrowLaneCombination, t_NarrowLaneCombination, NarrowLaneCombination);

          void t_NarrowLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(NarrowLaneCombination), &PY_TYPE_DEF(NarrowLaneCombination), module, "NarrowLaneCombination", 0);
          }

          void t_NarrowLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "class_", make_descriptor(NarrowLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "wrapfn_", make_descriptor(t_NarrowLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NarrowLaneCombination::initializeClass, 1)))
              return NULL;
            return t_NarrowLaneCombination::wrap_Object(NarrowLaneCombination(((t_NarrowLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NarrowLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooting::class$ = NULL;
      jmethodID *MultipleShooting::mids$ = NULL;
      bool MultipleShooting::live$ = false;

      jclass MultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_e62d3bb06d56d7e3] = env->getMethodID(cls, "compute", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_e62d3bb06d56d7e3]));
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
      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self);

      static PyMethodDef t_MultipleShooting__methods_[] = {
        DECLARE_METHOD(t_MultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, compute, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooting)[] = {
        { Py_tp_methods, t_MultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultipleShooting, t_MultipleShooting, MultipleShooting);

      void t_MultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooting), &PY_TYPE_DEF(MultipleShooting), module, "MultipleShooting", 0);
      }

      void t_MultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "class_", make_descriptor(MultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "wrapfn_", make_descriptor(t_MultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooting::initializeClass, 1)))
          return NULL;
        return t_MultipleShooting::wrap_Object(MultipleShooting(((t_MultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader::class$ = NULL;
      jmethodID *JPLEphemeridesLoader::mids$ = NULL;
      bool JPLEphemeridesLoader::live$ = false;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES = NULL;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES = NULL;

      jclass JPLEphemeridesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e906fa8e1510bed] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)V");
          mids$[mid_init$_e71269c9fcb1e6c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getLoadedAstronomicalUnit_b74f83833fdad017] = env->getMethodID(cls, "getLoadedAstronomicalUnit", "()D");
          mids$[mid_getLoadedConstant_af210cb89737bd6e] = env->getMethodID(cls, "getLoadedConstant", "([Ljava/lang/String;)D");
          mids$[mid_getLoadedEarthMoonMassRatio_b74f83833fdad017] = env->getMethodID(cls, "getLoadedEarthMoonMassRatio", "()D");
          mids$[mid_getLoadedGravitationalCoefficient_65f74fb31351403c] = env->getMethodID(cls, "getLoadedGravitationalCoefficient", "(Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)D");
          mids$[mid_getMaxChunksDuration_b74f83833fdad017] = env->getMethodID(cls, "getMaxChunksDuration", "()D");
          mids$[mid_loadCelestialBody_7eb4325e211386e9] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DE_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_DE_SUPPORTED_NAMES", "Ljava/lang/String;"));
          DEFAULT_INPOP_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INPOP_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0e906fa8e1510bed, a0.this$, a1.this$)) {}

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e71269c9fcb1e6c5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      jdouble JPLEphemeridesLoader::getLoadedAstronomicalUnit() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedAstronomicalUnit_b74f83833fdad017]);
      }

      jdouble JPLEphemeridesLoader::getLoadedConstant(const JArray< ::java::lang::String > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedConstant_af210cb89737bd6e], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getLoadedEarthMoonMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedEarthMoonMassRatio_b74f83833fdad017]);
      }

      jdouble JPLEphemeridesLoader::getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedGravitationalCoefficient_65f74fb31351403c], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getMaxChunksDuration() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxChunksDuration_b74f83833fdad017]);
      }

      ::org::orekit::bodies::CelestialBody JPLEphemeridesLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_7eb4325e211386e9], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedAstronomicalUnit),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedEarthMoonMassRatio),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, maxChunksDuration),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedAstronomicalUnit, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedConstant, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedEarthMoonMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedGravitationalCoefficient, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getMaxChunksDuration, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader__methods_ },
        { Py_tp_init, (void *) t_JPLEphemeridesLoader_init_ },
        { Py_tp_getset, t_JPLEphemeridesLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader, t_JPLEphemeridesLoader, JPLEphemeridesLoader);

      void t_JPLEphemeridesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader), &PY_TYPE_DEF(JPLEphemeridesLoader), module, "JPLEphemeridesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "EphemerisType", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "RawPVProvider", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider)));
      }

      void t_JPLEphemeridesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "class_", make_descriptor(JPLEphemeridesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_DE_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_INPOP_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES)));
      }

      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader::wrap_Object(JPLEphemeridesLoader(((t_JPLEphemeridesLoader *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            ::org::orekit::frames::Frame a4((jobject) NULL);
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sKkkk", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_, &a2, &a3, &a4))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1, a2, a3, a4));
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

      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        JArray< ::java::lang::String > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[s", &a0))
        {
          OBJ_CALL(result = self->object.getLoadedConstant(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedConstant", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &p0, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
        {
          OBJ_CALL(result = self->object.getLoadedGravitationalCoefficient(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedGravitationalCoefficient", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *SecantSolver::class$ = NULL;
        jmethodID *SecantSolver::mids$ = NULL;
        bool SecantSolver::live$ = false;

        jclass SecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/SecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_b74f83833fdad017] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SecantSolver::SecantSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        SecantSolver::SecantSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        SecantSolver::SecantSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args);
        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data);
        static PyGetSetDef t_SecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SecantSolver__methods_[] = {
          DECLARE_METHOD(t_SecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SecantSolver)[] = {
          { Py_tp_methods, t_SecantSolver__methods_ },
          { Py_tp_init, (void *) t_SecantSolver_init_ },
          { Py_tp_getset, t_SecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(SecantSolver, t_SecantSolver, SecantSolver);
        PyObject *t_SecantSolver::wrap_Object(const SecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SecantSolver), &PY_TYPE_DEF(SecantSolver), module, "SecantSolver", 0);
        }

        void t_SecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "class_", make_descriptor(SecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "wrapfn_", make_descriptor(t_SecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SecantSolver::initializeClass, 1)))
            return NULL;
          return t_SecantSolver::wrap_Object(SecantSolver(((t_SecantSolver *) arg)->object.this$));
        }
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SecantSolver object((jobject) NULL);

              INT_CALL(object = SecantSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SecantSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SecantSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "org/orekit/models/earth/troposphere/MariniMurrayModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MariniMurrayModel::class$ = NULL;
          jmethodID *MariniMurrayModel::mids$ = NULL;
          bool MariniMurrayModel::live$ = false;

          jclass MariniMurrayModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MariniMurrayModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_49f4b5153d696ea5] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_1781709fdef80e4c] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MariniMurrayModel;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MariniMurrayModel::MariniMurrayModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_49f4b5153d696ea5, a0, a1, a2, a3)) {}

          ::java::util::List MariniMurrayModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          MariniMurrayModel MariniMurrayModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MariniMurrayModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_1781709fdef80e4c], a0));
          }

          jdouble MariniMurrayModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MariniMurrayModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self);
          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args);
          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data);
          static PyGetSetDef t_MariniMurrayModel__fields_[] = {
            DECLARE_GET_FIELD(t_MariniMurrayModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MariniMurrayModel__methods_[] = {
            DECLARE_METHOD(t_MariniMurrayModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MariniMurrayModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MariniMurrayModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MariniMurrayModel)[] = {
            { Py_tp_methods, t_MariniMurrayModel__methods_ },
            { Py_tp_init, (void *) t_MariniMurrayModel_init_ },
            { Py_tp_getset, t_MariniMurrayModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MariniMurrayModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MariniMurrayModel, t_MariniMurrayModel, MariniMurrayModel);

          void t_MariniMurrayModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MariniMurrayModel), &PY_TYPE_DEF(MariniMurrayModel), module, "MariniMurrayModel", 0);
          }

          void t_MariniMurrayModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "class_", make_descriptor(MariniMurrayModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "wrapfn_", make_descriptor(t_MariniMurrayModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MariniMurrayModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MariniMurrayModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MariniMurrayModel::initializeClass, 1)))
              return NULL;
            return t_MariniMurrayModel::wrap_Object(MariniMurrayModel(((t_MariniMurrayModel *) arg)->object.this$));
          }
          static PyObject *t_MariniMurrayModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MariniMurrayModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MariniMurrayModel_init_(t_MariniMurrayModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MariniMurrayModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MariniMurrayModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MariniMurrayModel_getParametersDrivers(t_MariniMurrayModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MariniMurrayModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MariniMurrayModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MariniMurrayModel::getStandardModel(a0));
              return t_MariniMurrayModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_pathDelay(t_MariniMurrayModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MariniMurrayModel_get__parametersDrivers(t_MariniMurrayModel *self, void *data)
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
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldPVCoordinates::class$ = NULL;
      jmethodID *FieldPVCoordinates::mids$ = NULL;
      bool FieldPVCoordinates::live$ = false;

      jclass FieldPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c9e829dd925c6618] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e67380c15d7bb85a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_e53652729cc89dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8c18806a647b623a] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a82a71926d9e01a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_547f875cf70f6264] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_a494016481e7602f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_1c97ea822aabbabd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_db1a98118ce4db6d] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_8e5af44c2bd3f093] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_516fa767e7cc2415] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_199193858021b664] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_878d264b488023ec] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_d7e6c70ff4751ba2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_22950dc0d2f433e9] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;DLorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a610ace5364209c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_4caf5c71ea123a55] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_bb2381f65b7df7aa] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_crossProduct_448b59d288b2a2ff] = env->getMethodID(cls, "crossProduct", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_estimateVelocity_72df45201a864b2b] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAcceleration_ff5ac73a7b43eddd] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngularVelocity_ff5ac73a7b43eddd] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getMomentum_ff5ac73a7b43eddd] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_ff5ac73a7b43eddd] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getZero_dac7b66b757e9da0] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_negate_3bf1e58d8bf42589] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_normalize_3bf1e58d8bf42589] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_positionShiftedBy_0e25f993119a02fa] = env->getMethodID(cls, "positionShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_ffc2a13fa89e8345] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_shiftedBy_419fd97e4c533329] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructurePV_2d4908cd9204fb9d] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_87f39fdae6ed156b] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toPVCoordinates_180fb117720acb76] = env->getMethodID(cls, "toPVCoordinates", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_3bf1e58d8bf42589] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_ff5ac73a7b43eddd] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_3bf1e58d8bf42589] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_ff5ac73a7b43eddd] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9e829dd925c6618, a0.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e67380c15d7bb85a, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const FieldPVCoordinates & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e53652729cc89dd5, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8c18806a647b623a, a0, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a82a71926d9e01a9, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_547f875cf70f6264, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a494016481e7602f, a0.this$, a1.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c97ea822aabbabd, a0.this$, a1.this$, a2.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db1a98118ce4db6d, a0, a1.this$, a2, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8e5af44c2bd3f093, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_516fa767e7cc2415, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_199193858021b664, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_878d264b488023ec, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7e6c70ff4751ba2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(jdouble a0, const FieldPVCoordinates & a1, jdouble a2, const FieldPVCoordinates & a3, jdouble a4, const FieldPVCoordinates & a5, jdouble a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22950dc0d2f433e9, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const FieldPVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldPVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldPVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldPVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a610ace5364209c4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates::FieldPVCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::PVCoordinates & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::orekit::utils::PVCoordinates & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::orekit::utils::PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4caf5c71ea123a55, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

      FieldPVCoordinates FieldPVCoordinates::blendArithmeticallyWith(const FieldPVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_bb2381f65b7df7aa], a0.this$, a1.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::crossProduct(const FieldPVCoordinates & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_crossProduct_448b59d288b2a2ff], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_72df45201a864b2b], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_ff5ac73a7b43eddd]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_ff5ac73a7b43eddd]));
      }

      FieldPVCoordinates FieldPVCoordinates::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getZero_dac7b66b757e9da0], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::negate() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_3bf1e58d8bf42589]));
      }

      FieldPVCoordinates FieldPVCoordinates::normalize() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_3bf1e58d8bf42589]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::positionShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_0e25f993119a02fa], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_ffc2a13fa89e8345], a0));
      }

      FieldPVCoordinates FieldPVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_419fd97e4c533329], a0.this$));
      }

      FieldPVCoordinates FieldPVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_2d4908cd9204fb9d], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_87f39fdae6ed156b], a0));
      }

      ::org::orekit::utils::PVCoordinates FieldPVCoordinates::toPVCoordinates() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_toPVCoordinates_180fb117720acb76]));
      }

      ::java::lang::String FieldPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative1PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_3bf1e58d8bf42589]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_ff5ac73a7b43eddd]));
      }

      FieldPVCoordinates FieldPVCoordinates::toUnivariateDerivative2PV() const
      {
        return FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_3bf1e58d8bf42589]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldPVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_ff5ac73a7b43eddd]));
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
      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args);
      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg);
      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self);
      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data);
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data);
      static PyGetSetDef t_FieldPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, momentum),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, position),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, velocity),
        DECLARE_GET_FIELD(t_FieldPVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, crossProduct, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_FieldPVCoordinates, toPVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_FieldPVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPVCoordinates)[] = {
        { Py_tp_methods, t_FieldPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldPVCoordinates_init_ },
        { Py_tp_getset, t_FieldPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPVCoordinates, t_FieldPVCoordinates, FieldPVCoordinates);
      PyObject *t_FieldPVCoordinates::wrap_Object(const FieldPVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPVCoordinates *self = (t_FieldPVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPVCoordinates), &PY_TYPE_DEF(FieldPVCoordinates), module, "FieldPVCoordinates", 0);
      }

      void t_FieldPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "class_", make_descriptor(FieldPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "wrapfn_", make_descriptor(t_FieldPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldPVCoordinates::wrap_Object(FieldPVCoordinates(((t_FieldPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPVCoordinates_of_(t_FieldPVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPVCoordinates_init_(t_FieldPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DK", FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, FieldPVCoordinates::initializeClass, &a0, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            FieldPVCoordinates a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            FieldPVCoordinates a7((jobject) NULL);
            PyTypeObject **p7;
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldPVCoordinates::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldPVCoordinates::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::utils::PVCoordinates a5((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::utils::PVCoordinates a7((jobject) NULL);
            FieldPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
            {
              INT_CALL(object = FieldPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldPVCoordinates_blendArithmeticallyWith(t_FieldPVCoordinates *self, PyObject *args)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldPVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_crossProduct(t_FieldPVCoordinates *self, PyObject *arg)
      {
        FieldPVCoordinates a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", FieldPVCoordinates::initializeClass, &a0, &p0, t_FieldPVCoordinates::parameters_))
        {
          OBJ_CALL(result = self->object.crossProduct(a0));
          return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "crossProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_getAcceleration(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getAngularVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getMomentum(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getPosition(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getVelocity(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::utils::FieldPVCoordinates::getZero(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_negate(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_normalize(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldPVCoordinates_positionShiftedBy(t_FieldPVCoordinates *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_shiftedBy(t_FieldPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructurePV(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return t_FieldPVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toDerivativeStructureVector(t_FieldPVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_FieldPVCoordinates_toPVCoordinates(t_FieldPVCoordinates *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toPVCoordinates());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toString(t_FieldPVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative1Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2PV(t_FieldPVCoordinates *self)
      {
        FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return t_FieldPVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldPVCoordinates_toUnivariateDerivative2Vector(t_FieldPVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
      }
      static PyObject *t_FieldPVCoordinates_get__parameters_(t_FieldPVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPVCoordinates_get__acceleration(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__angularVelocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__momentum(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__position(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldPVCoordinates_get__velocity(t_FieldPVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *BivariateFunction::class$ = NULL;
      jmethodID *BivariateFunction::mids$ = NULL;
      bool BivariateFunction::live$ = false;

      jclass BivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/BivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble BivariateFunction::value(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
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
      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args);

      static PyMethodDef t_BivariateFunction__methods_[] = {
        DECLARE_METHOD(t_BivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BivariateFunction)[] = {
        { Py_tp_methods, t_BivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BivariateFunction, t_BivariateFunction, BivariateFunction);

      void t_BivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(BivariateFunction), &PY_TYPE_DEF(BivariateFunction), module, "BivariateFunction", 0);
      }

      void t_BivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "class_", make_descriptor(BivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "wrapfn_", make_descriptor(t_BivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BivariateFunction::initializeClass, 1)))
          return NULL;
        return t_BivariateFunction::wrap_Object(BivariateFunction(((t_BivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_BivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BivariateFunction_value(t_BivariateFunction *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggersResetter::class$ = NULL;
          jmethodID *PythonManeuverTriggersResetter::mids$ = NULL;
          bool PythonManeuverTriggersResetter::live$ = false;

          jclass PythonManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_maneuverTriggered_1c47c97cdbc7e206] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_resetState_c3c52b1257139045] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggersResetter::PythonManeuverTriggersResetter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonManeuverTriggersResetter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          void PythonManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_1c47c97cdbc7e206], a0.this$, a1);
          }

          jlong PythonManeuverTriggersResetter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonManeuverTriggersResetter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self);
          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0);
          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggersResetter, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_PythonManeuverTriggersResetter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_PythonManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggersResetter_init_ },
            { Py_tp_getset, t_PythonManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggersResetter, t_PythonManeuverTriggersResetter, PythonManeuverTriggersResetter);

          void t_PythonManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggersResetter), &PY_TYPE_DEF(PythonManeuverTriggersResetter), module, "PythonManeuverTriggersResetter", 1);
          }

          void t_PythonManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "class_", make_descriptor(PythonManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "wrapfn_", make_descriptor(t_PythonManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggersResetter::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggersResetter_pythonDecRef0 },
              { "resetState", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonManeuverTriggersResetter_resetState1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggersResetter::wrap_Object(PythonManeuverTriggersResetter(((t_PythonManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggersResetter_init_(t_PythonManeuverTriggersResetter *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggersResetter object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggersResetter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggersResetter_finalize(t_PythonManeuverTriggersResetter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggersResetter_maneuverTriggered(t_PythonManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jboolean a1;

            if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_PythonManeuverTriggersResetter_pythonExtension(t_PythonManeuverTriggersResetter *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggersResetter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static jobject JNICALL t_PythonManeuverTriggersResetter_resetState1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggersResetter::mids$[PythonManeuverTriggersResetter::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "resetState", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              throwTypeError("resetState", result);
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

          static PyObject *t_PythonManeuverTriggersResetter_get__self(t_PythonManeuverTriggersResetter *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperature2Model.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/models/earth/Geoid.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperature2Model::class$ = NULL;
          jmethodID *GlobalPressureTemperature2Model::mids$ = NULL;
          bool GlobalPressureTemperature2Model::live$ = false;
          ::java::lang::String *GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass GlobalPressureTemperature2Model::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperature2Model");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c448a2cd99d96cb1] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_b06417268b599627] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;)V");
              mids$[mid_init$_f2826778d522c000] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/Geoid;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getA_25e1757a36c4dde2] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getPressure_b74f83833fdad017] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_b74f83833fdad017] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_getWaterVaporPressure_b74f83833fdad017] = env->getMethodID(cls, "getWaterVaporPressure", "()D");
              mids$[mid_weatherParameters_98ef3c02384a4218] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(jdouble a0, jdouble a1, const ::org::orekit::models::earth::Geoid & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c448a2cd99d96cb1, a0, a1, a2.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b06417268b599627, a0.this$, a1, a2, a3.this$)) {}

          GlobalPressureTemperature2Model::GlobalPressureTemperature2Model(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::Geoid & a3, const ::org::orekit::data::DataProvidersManager & a4, const ::org::orekit::time::TimeScale & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f2826778d522c000, a0.this$, a1, a2, a3.this$, a4.this$, a5.this$)) {}

          JArray< jdouble > GlobalPressureTemperature2Model::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_25e1757a36c4dde2]));
          }

          jdouble GlobalPressureTemperature2Model::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_b74f83833fdad017]);
          }

          jdouble GlobalPressureTemperature2Model::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_b74f83833fdad017]);
          }

          jdouble GlobalPressureTemperature2Model::getWaterVaporPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWaterVaporPressure_b74f83833fdad017]);
          }

          void GlobalPressureTemperature2Model::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_98ef3c02384a4218], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self);
          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data);
          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperature2Model__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, a),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, temperature),
            DECLARE_GET_FIELD(t_GlobalPressureTemperature2Model, waterVaporPressure),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperature2Model__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getA, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, getWaterVaporPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperature2Model, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperature2Model)[] = {
            { Py_tp_methods, t_GlobalPressureTemperature2Model__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperature2Model_init_ },
            { Py_tp_getset, t_GlobalPressureTemperature2Model__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperature2Model)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperature2Model, t_GlobalPressureTemperature2Model, GlobalPressureTemperature2Model);

          void t_GlobalPressureTemperature2Model::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperature2Model), &PY_TYPE_DEF(GlobalPressureTemperature2Model), module, "GlobalPressureTemperature2Model", 0);
          }

          void t_GlobalPressureTemperature2Model::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "class_", make_descriptor(GlobalPressureTemperature2Model::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "wrapfn_", make_descriptor(t_GlobalPressureTemperature2Model::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "boxfn_", make_descriptor(boxObject));
            env->getClass(GlobalPressureTemperature2Model::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperature2Model), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*GlobalPressureTemperature2Model::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_GlobalPressureTemperature2Model_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperature2Model::wrap_Object(GlobalPressureTemperature2Model(((t_GlobalPressureTemperature2Model *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperature2Model_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperature2Model::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperature2Model_init_(t_GlobalPressureTemperature2Model *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::Geoid a2((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDk", ::org::orekit::models::earth::Geoid::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::Geoid a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ::org::orekit::time::TimeScale a5((jobject) NULL);
                GlobalPressureTemperature2Model object((jobject) NULL);

                if (!parseArgs(args, "sDDkkk", ::org::orekit::models::earth::Geoid::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = GlobalPressureTemperature2Model(a0, a1, a2, a3, a4, a5));
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

          static PyObject *t_GlobalPressureTemperature2Model_getA(t_GlobalPressureTemperature2Model *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_getPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getTemperature(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_getWaterVaporPressure(t_GlobalPressureTemperature2Model *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperature2Model_weatherParameters(t_GlobalPressureTemperature2Model *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__a(t_GlobalPressureTemperature2Model *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__pressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__temperature(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperature2Model_get__waterVaporPressure(t_GlobalPressureTemperature2Model *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWaterVaporPressure());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "org/orekit/gnss/rflink/gps/SubFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame::class$ = NULL;
          jmethodID *SubFrame::mids$ = NULL;
          bool SubFrame::live$ = false;
          jint SubFrame::PREAMBLE_VALUE = (jint) 0;

          jclass SubFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkParity_75f431eefaad4f32] = env->getStaticMethodID(cls, "checkParity", "(II)Z");
              mids$[mid_getAlert_55546ef6a647f39b] = env->getMethodID(cls, "getAlert", "()I");
              mids$[mid_getAntiSpoofing_55546ef6a647f39b] = env->getMethodID(cls, "getAntiSpoofing", "()I");
              mids$[mid_getId_55546ef6a647f39b] = env->getMethodID(cls, "getId", "()I");
              mids$[mid_getIntegrityStatus_55546ef6a647f39b] = env->getMethodID(cls, "getIntegrityStatus", "()I");
              mids$[mid_getMessage_55546ef6a647f39b] = env->getMethodID(cls, "getMessage", "()I");
              mids$[mid_getPreamble_55546ef6a647f39b] = env->getMethodID(cls, "getPreamble", "()I");
              mids$[mid_getTow_55546ef6a647f39b] = env->getMethodID(cls, "getTow", "()I");
              mids$[mid_hasParityErrors_9ab94ac1dc23b105] = env->getMethodID(cls, "hasParityErrors", "()Z");
              mids$[mid_parse_5d8d319ba7c11045] = env->getStaticMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Lorg/orekit/gnss/rflink/gps/SubFrame;");
              mids$[mid_setField_d001b9440055cbbc] = env->getMethodID(cls, "setField", "(IIII[I)V");
              mids$[mid_setField_28f32421fe0b8040] = env->getMethodID(cls, "setField", "(IIIIIII[I)V");
              mids$[mid_getField_0e7cf35192c3effe] = env->getMethodID(cls, "getField", "(I)I");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREAMBLE_VALUE = env->getStaticIntField(cls, "PREAMBLE_VALUE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SubFrame::checkParity(jint a0, jint a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_checkParity_75f431eefaad4f32], a0, a1);
          }

          jint SubFrame::getAlert() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlert_55546ef6a647f39b]);
          }

          jint SubFrame::getAntiSpoofing() const
          {
            return env->callIntMethod(this$, mids$[mid_getAntiSpoofing_55546ef6a647f39b]);
          }

          jint SubFrame::getId() const
          {
            return env->callIntMethod(this$, mids$[mid_getId_55546ef6a647f39b]);
          }

          jint SubFrame::getIntegrityStatus() const
          {
            return env->callIntMethod(this$, mids$[mid_getIntegrityStatus_55546ef6a647f39b]);
          }

          jint SubFrame::getMessage() const
          {
            return env->callIntMethod(this$, mids$[mid_getMessage_55546ef6a647f39b]);
          }

          jint SubFrame::getPreamble() const
          {
            return env->callIntMethod(this$, mids$[mid_getPreamble_55546ef6a647f39b]);
          }

          jint SubFrame::getTow() const
          {
            return env->callIntMethod(this$, mids$[mid_getTow_55546ef6a647f39b]);
          }

          jboolean SubFrame::hasParityErrors() const
          {
            return env->callBooleanMethod(this$, mids$[mid_hasParityErrors_9ab94ac1dc23b105]);
          }

          SubFrame SubFrame::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SubFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_5d8d319ba7c11045], a0.this$));
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
          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args);
          static PyObject *t_SubFrame_getAlert(t_SubFrame *self);
          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self);
          static PyObject *t_SubFrame_getId(t_SubFrame *self);
          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self);
          static PyObject *t_SubFrame_getMessage(t_SubFrame *self);
          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self);
          static PyObject *t_SubFrame_getTow(t_SubFrame *self);
          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self);
          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data);
          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data);
          static PyGetSetDef t_SubFrame__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame, alert),
            DECLARE_GET_FIELD(t_SubFrame, antiSpoofing),
            DECLARE_GET_FIELD(t_SubFrame, id),
            DECLARE_GET_FIELD(t_SubFrame, integrityStatus),
            DECLARE_GET_FIELD(t_SubFrame, message),
            DECLARE_GET_FIELD(t_SubFrame, preamble),
            DECLARE_GET_FIELD(t_SubFrame, tow),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame__methods_[] = {
            DECLARE_METHOD(t_SubFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, checkParity, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SubFrame, getAlert, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getAntiSpoofing, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getId, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getIntegrityStatus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getMessage, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getPreamble, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, getTow, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, hasParityErrors, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame)[] = {
            { Py_tp_methods, t_SubFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubFrame, t_SubFrame, SubFrame);

          void t_SubFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame), &PY_TYPE_DEF(SubFrame), module, "SubFrame", 0);
          }

          void t_SubFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "class_", make_descriptor(SubFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "wrapfn_", make_descriptor(t_SubFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(SubFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame), "PREAMBLE_VALUE", make_descriptor(SubFrame::PREAMBLE_VALUE));
          }

          static PyObject *t_SubFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame::initializeClass, 1)))
              return NULL;
            return t_SubFrame::wrap_Object(SubFrame(((t_SubFrame *) arg)->object.this$));
          }
          static PyObject *t_SubFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame_checkParity(PyTypeObject *type, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::checkParity(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "checkParity", args);
            return NULL;
          }

          static PyObject *t_SubFrame_getAlert(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAlert());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getAntiSpoofing(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getId(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getId());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getIntegrityStatus(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getMessage(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMessage());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getPreamble(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPreamble());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_getTow(t_SubFrame *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTow());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame_hasParityErrors(t_SubFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.hasParityErrors());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SubFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            SubFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::rflink::gps::SubFrame::parse(a0));
              return t_SubFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_SubFrame_get__alert(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAlert());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__antiSpoofing(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAntiSpoofing());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__id(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getId());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__integrityStatus(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIntegrityStatus());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__message(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMessage());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__preamble(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPreamble());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame_get__tow(t_SubFrame *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTow());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefinedWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *UserDefinedWriter::class$ = NULL;
            jmethodID *UserDefinedWriter::mids$ = NULL;
            bool UserDefinedWriter::live$ = false;

            jclass UserDefinedWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/UserDefinedWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_8d5316089ada315a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_writeContent_fb222e851cd27682] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            UserDefinedWriter::UserDefinedWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_8d5316089ada315a, a0.this$, a1.this$, a2.this$)) {}
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
          namespace odm {
            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_UserDefinedWriter__methods_[] = {
              DECLARE_METHOD(t_UserDefinedWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UserDefinedWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UserDefinedWriter)[] = {
              { Py_tp_methods, t_UserDefinedWriter__methods_ },
              { Py_tp_init, (void *) t_UserDefinedWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UserDefinedWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(UserDefinedWriter, t_UserDefinedWriter, UserDefinedWriter);

            void t_UserDefinedWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(UserDefinedWriter), &PY_TYPE_DEF(UserDefinedWriter), module, "UserDefinedWriter", 0);
            }

            void t_UserDefinedWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "class_", make_descriptor(UserDefinedWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "wrapfn_", make_descriptor(t_UserDefinedWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UserDefinedWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UserDefinedWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UserDefinedWriter::initializeClass, 1)))
                return NULL;
              return t_UserDefinedWriter::wrap_Object(UserDefinedWriter(((t_UserDefinedWriter *) arg)->object.this$));
            }
            static PyObject *t_UserDefinedWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UserDefinedWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_UserDefinedWriter_init_(t_UserDefinedWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a2((jobject) NULL);
              UserDefinedWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UserDefinedWriter(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroRangeModifier::class$ = NULL;
          jmethodID *ShapiroRangeModifier::mids$ = NULL;
          bool ShapiroRangeModifier::live$ = false;

          jclass ShapiroRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_308087fabc1d7f66] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroRangeModifier::ShapiroRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

          ::java::util::List ShapiroRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          void ShapiroRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self);
          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroRangeModifier, t_ShapiroRangeModifier, ShapiroRangeModifier);

          void t_ShapiroRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroRangeModifier), &PY_TYPE_DEF(ShapiroRangeModifier), module, "ShapiroRangeModifier", 0);
          }

          void t_ShapiroRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "class_", make_descriptor(ShapiroRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "wrapfn_", make_descriptor(t_ShapiroRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroRangeModifier::wrap_Object(ShapiroRangeModifier(((t_ShapiroRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroRangeModifier_init_(t_ShapiroRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroRangeModifier_getParametersDrivers(t_ShapiroRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroRangeModifier_modifyWithoutDerivatives(t_ShapiroRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroRangeModifier_get__parametersDrivers(t_ShapiroRangeModifier *self, void *data)
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
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StatisticalSummary::class$ = NULL;
        jmethodID *StatisticalSummary::mids$ = NULL;
        bool StatisticalSummary::live$ = false;

        jclass StatisticalSummary::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StatisticalSummary");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_b5d4386d9c48f5f3] = env->getStaticMethodID(cls, "aggregate", "([Lorg/hipparchus/stat/descriptive/StatisticalSummary;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_aggregate_b2572dd77c02dd54] = env->getStaticMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)Lorg/hipparchus/stat/descriptive/StatisticalSummary;");
            mids$[mid_getMax_b74f83833fdad017] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_b74f83833fdad017] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_b74f83833fdad017] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getStandardDeviation_b74f83833fdad017] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_b74f83833fdad017] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getVariance_b74f83833fdad017] = env->getMethodID(cls, "getVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StatisticalSummary StatisticalSummary::aggregate(const JArray< StatisticalSummary > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_b5d4386d9c48f5f3], a0.this$));
        }

        StatisticalSummary StatisticalSummary::aggregate(const ::java::lang::Iterable & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StatisticalSummary(env->callStaticObjectMethod(cls, mids$[mid_aggregate_b2572dd77c02dd54], a0.this$));
        }

        jdouble StatisticalSummary::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_b74f83833fdad017]);
        }

        jdouble StatisticalSummary::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_b74f83833fdad017]);
        }

        jdouble StatisticalSummary::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_b74f83833fdad017]);
        }

        jlong StatisticalSummary::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble StatisticalSummary::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_b74f83833fdad017]);
        }

        jdouble StatisticalSummary::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_b74f83833fdad017]);
        }

        jdouble StatisticalSummary::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_b74f83833fdad017]);
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
        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args);
        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self);
        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data);
        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data);
        static PyGetSetDef t_StatisticalSummary__fields_[] = {
          DECLARE_GET_FIELD(t_StatisticalSummary, max),
          DECLARE_GET_FIELD(t_StatisticalSummary, mean),
          DECLARE_GET_FIELD(t_StatisticalSummary, min),
          DECLARE_GET_FIELD(t_StatisticalSummary, n),
          DECLARE_GET_FIELD(t_StatisticalSummary, standardDeviation),
          DECLARE_GET_FIELD(t_StatisticalSummary, sum),
          DECLARE_GET_FIELD(t_StatisticalSummary, variance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StatisticalSummary__methods_[] = {
          DECLARE_METHOD(t_StatisticalSummary, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, aggregate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StatisticalSummary, getMax, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMean, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getMin, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getN, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getSum, METH_NOARGS),
          DECLARE_METHOD(t_StatisticalSummary, getVariance, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StatisticalSummary)[] = {
          { Py_tp_methods, t_StatisticalSummary__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StatisticalSummary__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StatisticalSummary)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StatisticalSummary, t_StatisticalSummary, StatisticalSummary);

        void t_StatisticalSummary::install(PyObject *module)
        {
          installType(&PY_TYPE(StatisticalSummary), &PY_TYPE_DEF(StatisticalSummary), module, "StatisticalSummary", 0);
        }

        void t_StatisticalSummary::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "class_", make_descriptor(StatisticalSummary::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "wrapfn_", make_descriptor(t_StatisticalSummary::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StatisticalSummary), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StatisticalSummary_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StatisticalSummary::initializeClass, 1)))
            return NULL;
          return t_StatisticalSummary::wrap_Object(StatisticalSummary(((t_StatisticalSummary *) arg)->object.this$));
        }
        static PyObject *t_StatisticalSummary_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StatisticalSummary::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StatisticalSummary_aggregate(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< StatisticalSummary > a0((jobject) NULL);
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "[k", StatisticalSummary::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;
              StatisticalSummary result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(result = ::org::hipparchus::stat::descriptive::StatisticalSummary::aggregate(a0));
                return t_StatisticalSummary::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "aggregate", args);
          return NULL;
        }

        static PyObject *t_StatisticalSummary_getMax(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMean(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getMin(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getN(t_StatisticalSummary *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StatisticalSummary_getStandardDeviation(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getSum(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_getVariance(t_StatisticalSummary *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StatisticalSummary_get__max(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__mean(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__min(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__n(t_StatisticalSummary *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StatisticalSummary_get__standardDeviation(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__sum(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StatisticalSummary_get__variance(t_StatisticalSummary *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGibbs.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGibbs::class$ = NULL;
        jmethodID *IodGibbs::mids$ = NULL;
        bool IodGibbs::live$ = false;

        jclass IodGibbs::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGibbs");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_fd8045d0690ebcec] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a736219fd2ea09d6] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_10daf50d426fd970] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGibbs::IodGibbs(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::PV & a1, const ::org::orekit::estimation::measurements::PV & a2, const ::org::orekit::estimation::measurements::PV & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_fd8045d0690ebcec], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::Position & a1, const ::org::orekit::estimation::measurements::Position & a2, const ::org::orekit::estimation::measurements::Position & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a736219fd2ea09d6], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGibbs::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_10daf50d426fd970], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args);

        static PyMethodDef t_IodGibbs__methods_[] = {
          DECLARE_METHOD(t_IodGibbs, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGibbs, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGibbs)[] = {
          { Py_tp_methods, t_IodGibbs__methods_ },
          { Py_tp_init, (void *) t_IodGibbs_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGibbs)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGibbs, t_IodGibbs, IodGibbs);

        void t_IodGibbs::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGibbs), &PY_TYPE_DEF(IodGibbs), module, "IodGibbs", 0);
        }

        void t_IodGibbs::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "class_", make_descriptor(IodGibbs::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "wrapfn_", make_descriptor(t_IodGibbs::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGibbs), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGibbs_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGibbs::initializeClass, 1)))
            return NULL;
          return t_IodGibbs::wrap_Object(IodGibbs(((t_IodGibbs *) arg)->object.this$));
        }
        static PyObject *t_IodGibbs_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGibbs::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGibbs_init_(t_IodGibbs *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGibbs object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGibbs(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGibbs_estimate(t_IodGibbs *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::PV a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::PV a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_PV::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_PV::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::Position a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::Position a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_Position::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_Position::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemParser::class$ = NULL;
              jmethodID *OemParser::mids$ = NULL;
              bool OemParser::live$ = false;

              jclass OemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_822f8bd254a8fa1e] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_finalizeData_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_de29107d9fd9c097] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_inData_9ab94ac1dc23b105] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_437e74bd1ebc510d] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_prepareData_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_9ab94ac1dc23b105] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_28163d47221b3cf7] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_build_822f8bd254a8fa1e]));
              }

              jboolean OemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_9ab94ac1dc23b105]);
              }

              jboolean OemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_9ab94ac1dc23b105]);
              }

              jboolean OemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_de29107d9fd9c097]));
              }

              jboolean OemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_9ab94ac1dc23b105]);
              }

              jboolean OemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_9ab94ac1dc23b105]);
              }

              jboolean OemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_9ab94ac1dc23b105]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_parse_437e74bd1ebc510d], a0.this$));
              }

              jboolean OemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_9ab94ac1dc23b105]);
              }

              jboolean OemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_9ab94ac1dc23b105]);
              }

              jboolean OemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_9ab94ac1dc23b105]);
              }

              void OemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_28163d47221b3cf7], a0.this$);
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
          namespace odm {
            namespace oem {
              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg);
              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data);
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data);
              static PyGetSetDef t_OemParser__fields_[] = {
                DECLARE_GET_FIELD(t_OemParser, header),
                DECLARE_GET_FIELD(t_OemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemParser__methods_[] = {
                DECLARE_METHOD(t_OemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, parse, METH_O),
                DECLARE_METHOD(t_OemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemParser)[] = {
                { Py_tp_methods, t_OemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OemParser, t_OemParser, OemParser);
              PyObject *t_OemParser::wrap_Object(const OemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OemParser), &PY_TYPE_DEF(OemParser), module, "OemParser", 0);
              }

              void t_OemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "class_", make_descriptor(OemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "wrapfn_", make_descriptor(t_OemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemParser::initializeClass, 1)))
                  return NULL;
                return t_OemParser::wrap_Object(OemParser(((t_OemParser *) arg)->object.this$));
              }
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
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
#include "org/hipparchus/linear/ConjugateGradient.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *ConjugateGradient::class$ = NULL;
      jmethodID *ConjugateGradient::mids$ = NULL;
      bool ConjugateGradient::live$ = false;
      ::java::lang::String *ConjugateGradient::OPERATOR = NULL;
      ::java::lang::String *ConjugateGradient::VECTOR = NULL;

      jclass ConjugateGradient::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/ConjugateGradient");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_da450846491b522c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;DZ)V");
          mids$[mid_init$_911582bb3a73ac58] = env->getMethodID(cls, "<init>", "(IDZ)V");
          mids$[mid_shouldCheck_9ab94ac1dc23b105] = env->getMethodID(cls, "shouldCheck", "()Z");
          mids$[mid_solveInPlace_0f4c606f88ffcaeb] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OPERATOR = new ::java::lang::String(env->getStaticObjectField(cls, "OPERATOR", "Ljava/lang/String;"));
          VECTOR = new ::java::lang::String(env->getStaticObjectField(cls, "VECTOR", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConjugateGradient::ConjugateGradient(const ::org::hipparchus::util::IterationManager & a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_da450846491b522c, a0.this$, a1, a2)) {}

      ConjugateGradient::ConjugateGradient(jint a0, jdouble a1, jboolean a2) : ::org::hipparchus::linear::PreconditionedIterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_911582bb3a73ac58, a0, a1, a2)) {}

      jboolean ConjugateGradient::shouldCheck() const
      {
        return env->callBooleanMethod(this$, mids$[mid_shouldCheck_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::RealVector ConjugateGradient::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_0f4c606f88ffcaeb], a0.this$, a1.this$, a2.this$, a3.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self);
      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args);

      static PyMethodDef t_ConjugateGradient__methods_[] = {
        DECLARE_METHOD(t_ConjugateGradient, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConjugateGradient, shouldCheck, METH_NOARGS),
        DECLARE_METHOD(t_ConjugateGradient, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConjugateGradient)[] = {
        { Py_tp_methods, t_ConjugateGradient__methods_ },
        { Py_tp_init, (void *) t_ConjugateGradient_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConjugateGradient)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::PreconditionedIterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(ConjugateGradient, t_ConjugateGradient, ConjugateGradient);

      void t_ConjugateGradient::install(PyObject *module)
      {
        installType(&PY_TYPE(ConjugateGradient), &PY_TYPE_DEF(ConjugateGradient), module, "ConjugateGradient", 0);
      }

      void t_ConjugateGradient::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "class_", make_descriptor(ConjugateGradient::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "wrapfn_", make_descriptor(t_ConjugateGradient::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "boxfn_", make_descriptor(boxObject));
        env->getClass(ConjugateGradient::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "OPERATOR", make_descriptor(j2p(*ConjugateGradient::OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConjugateGradient), "VECTOR", make_descriptor(j2p(*ConjugateGradient::VECTOR)));
      }

      static PyObject *t_ConjugateGradient_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConjugateGradient::initializeClass, 1)))
          return NULL;
        return t_ConjugateGradient::wrap_Object(ConjugateGradient(((t_ConjugateGradient *) arg)->object.this$));
      }
      static PyObject *t_ConjugateGradient_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConjugateGradient::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ConjugateGradient_init_(t_ConjugateGradient *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::util::IterationManager::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jdouble a1;
            jboolean a2;
            ConjugateGradient object((jobject) NULL);

            if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = ConjugateGradient(a0, a1, a2));
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

      static PyObject *t_ConjugateGradient_shouldCheck(t_ConjugateGradient *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.shouldCheck());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ConjugateGradient_solveInPlace(t_ConjugateGradient *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
        ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
        ::org::hipparchus::linear::RealVector a2((jobject) NULL);
        ::org::hipparchus::linear::RealVector a3((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ConjugateGradient), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
