#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmElements::class$ = NULL;
              jmethodID *AcmElements::mids$ = NULL;
              bool AcmElements::live$ = false;
              AcmElements *AcmElements::AD = NULL;
              AcmElements *AcmElements::ATT = NULL;
              AcmElements *AcmElements::COV = NULL;
              AcmElements *AcmElements::MAN = NULL;
              AcmElements *AcmElements::PHYS = NULL;
              AcmElements *AcmElements::USER = NULL;

              jclass AcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_dd25a9b5d490b162] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");
                  mids$[mid_values_19d103ff12239630] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmElements(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  ATT = new AcmElements(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  COV = new AcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  MAN = new AcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  PHYS = new AcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  USER = new AcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmElements AcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dd25a9b5d490b162], a0.this$));
              }

              JArray< AcmElements > AcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_19d103ff12239630]));
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
            namespace acm {
              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args);
              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmElements_values(PyTypeObject *type);
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data);
              static PyGetSetDef t_AcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_AcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmElements__methods_[] = {
                DECLARE_METHOD(t_AcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmElements)[] = {
                { Py_tp_methods, t_AcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmElements, t_AcmElements, AcmElements);
              PyObject *t_AcmElements::wrap_Object(const AcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmElements), &PY_TYPE_DEF(AcmElements), module, "AcmElements", 0);
              }

              void t_AcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "class_", make_descriptor(AcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "wrapfn_", make_descriptor(t_AcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "AD", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "ATT", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "COV", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "MAN", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "PHYS", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "USER", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::USER)));
              }

              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmElements::initializeClass, 1)))
                  return NULL;
                return t_AcmElements::wrap_Object(AcmElements(((t_AcmElements *) arg)->object.this$));
              }
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::valueOf(a0));
                  return t_AcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmElements_values(PyTypeObject *type)
              {
                JArray< AcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_AcmElements::wrap_jobject);
              }
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTAtmosphericDrag::class$ = NULL;
            jmethodID *DSSTAtmosphericDrag::mids$ = NULL;
            bool DSSTAtmosphericDrag::live$ = false;

            jclass DSSTAtmosphericDrag::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6cee8d78b22b267b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/drag/DragForce;D)V");
                mids$[mid_init$_925428893a7d0d7a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;D)V");
                mids$[mid_init$_4ee16ea79af9314b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;DDD)V");
                mids$[mid_getAtmosphere_97b68f99073ea89d] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
                mids$[mid_getDrag_013b7a196580bfdb] = env->getMethodID(cls, "getDrag", "()Lorg/orekit/forces/drag/DragForce;");
                mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getRbar_456d9a2f64d6b28d] = env->getMethodID(cls, "getRbar", "()D");
                mids$[mid_getSpacecraft_e36253101b741e3a] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");
                mids$[mid_getParametersDriversWithoutMu_a6156df500549a58] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");
                mids$[mid_getLLimits_4ece4b82b4394674] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getLLimits_f53f254b7878e0dd] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce & a0, jdouble a1) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_6cee8d78b22b267b, a0.this$, a1)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, jdouble a2) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_925428893a7d0d7a, a0.this$, a1.this$, a2)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_4ee16ea79af9314b, a0.this$, a1, a2, a3)) {}

            ::org::orekit::models::earth::atmosphere::Atmosphere DSSTAtmosphericDrag::getAtmosphere() const
            {
              return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_97b68f99073ea89d]));
            }

            ::org::orekit::forces::drag::DragForce DSSTAtmosphericDrag::getDrag() const
            {
              return ::org::orekit::forces::drag::DragForce(env->callObjectMethod(this$, mids$[mid_getDrag_013b7a196580bfdb]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
            }

            jdouble DSSTAtmosphericDrag::getRbar() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRbar_456d9a2f64d6b28d]);
            }

            ::org::orekit::forces::drag::DragSensitive DSSTAtmosphericDrag::getSpacecraft() const
            {
              return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_e36253101b741e3a]));
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
          namespace forces {
            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args);
            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self);
            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data);
            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data);
            static PyGetSetDef t_DSSTAtmosphericDrag__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, atmosphere),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, drag),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, eventDetectors),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, rbar),
              DECLARE_GET_FIELD(t_DSSTAtmosphericDrag, spacecraft),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTAtmosphericDrag__methods_[] = {
              DECLARE_METHOD(t_DSSTAtmosphericDrag, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getAtmosphere, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getDrag, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getFieldEventDetectors, METH_VARARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getRbar, METH_NOARGS),
              DECLARE_METHOD(t_DSSTAtmosphericDrag, getSpacecraft, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTAtmosphericDrag)[] = {
              { Py_tp_methods, t_DSSTAtmosphericDrag__methods_ },
              { Py_tp_init, (void *) t_DSSTAtmosphericDrag_init_ },
              { Py_tp_getset, t_DSSTAtmosphericDrag__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTAtmosphericDrag)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution),
              NULL
            };

            DEFINE_TYPE(DSSTAtmosphericDrag, t_DSSTAtmosphericDrag, DSSTAtmosphericDrag);

            void t_DSSTAtmosphericDrag::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTAtmosphericDrag), &PY_TYPE_DEF(DSSTAtmosphericDrag), module, "DSSTAtmosphericDrag", 0);
            }

            void t_DSSTAtmosphericDrag::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "class_", make_descriptor(DSSTAtmosphericDrag::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "wrapfn_", make_descriptor(t_DSSTAtmosphericDrag::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTAtmosphericDrag), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTAtmosphericDrag_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTAtmosphericDrag::initializeClass, 1)))
                return NULL;
              return t_DSSTAtmosphericDrag::wrap_Object(DSSTAtmosphericDrag(((t_DSSTAtmosphericDrag *) arg)->object.this$));
            }
            static PyObject *t_DSSTAtmosphericDrag_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTAtmosphericDrag::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTAtmosphericDrag_init_(t_DSSTAtmosphericDrag *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::forces::drag::DragForce a0((jobject) NULL);
                  jdouble a1;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kD", ::org::orekit::forces::drag::DragForce::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
                  jdouble a2;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kkD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  DSSTAtmosphericDrag object((jobject) NULL);

                  if (!parseArgs(args, "kDDD", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    INT_CALL(object = DSSTAtmosphericDrag(a0, a1, a2, a3));
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

            static PyObject *t_DSSTAtmosphericDrag_getAtmosphere(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
              OBJ_CALL(result = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getDrag(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragForce result((jobject) NULL);
              OBJ_CALL(result = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getEventDetectors());
                return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getFieldEventDetectors(t_DSSTAtmosphericDrag *self, PyObject *args)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::stream::Stream result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
                return ::java::util::stream::t_Stream::wrap_Object(result);
              }

              return callSuper(PY_TYPE(DSSTAtmosphericDrag), (PyObject *) self, "getFieldEventDetectors", args, 2);
            }

            static PyObject *t_DSSTAtmosphericDrag_getRbar(t_DSSTAtmosphericDrag *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRbar());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTAtmosphericDrag_getSpacecraft(t_DSSTAtmosphericDrag *self)
            {
              ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__atmosphere(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
              OBJ_CALL(value = self->object.getAtmosphere());
              return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__drag(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragForce value((jobject) NULL);
              OBJ_CALL(value = self->object.getDrag());
              return ::org::orekit::forces::drag::t_DragForce::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__eventDetectors(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::java::util::stream::Stream value((jobject) NULL);
              OBJ_CALL(value = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__rbar(t_DSSTAtmosphericDrag *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRbar());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTAtmosphericDrag_get__spacecraft(t_DSSTAtmosphericDrag *self, void *data)
            {
              ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraft());
              return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/FixedZHomothety.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
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
            mids$[mid_init$_dc256bfc3daae929] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;D)V");
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_5b56f31df08e1557] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_e434856d6b086dd4] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedZHomothety::FixedZHomothety(const ::java::lang::String & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc256bfc3daae929, a0.this$, a1)) {}

        ::java::util::stream::Stream FixedZHomothety::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_5b56f31df08e1557], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedZHomothety::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_e434856d6b086dd4], a0, a1.this$, a2.this$));
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
#include "org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *InterSatellitesPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *InterSatellitesPhaseAmbiguityModifier::mids$ = NULL;
          bool InterSatellitesPhaseAmbiguityModifier::live$ = false;

          jclass InterSatellitesPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/InterSatellitesPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhaseAmbiguityModifier::InterSatellitesPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

          ::java::util::List InterSatellitesPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void InterSatellitesPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void InterSatellitesPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_InterSatellitesPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_InterSatellitesPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_InterSatellitesPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_InterSatellitesPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhaseAmbiguityModifier, t_InterSatellitesPhaseAmbiguityModifier, InterSatellitesPhaseAmbiguityModifier);

          void t_InterSatellitesPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhaseAmbiguityModifier), &PY_TYPE_DEF(InterSatellitesPhaseAmbiguityModifier), module, "InterSatellitesPhaseAmbiguityModifier", 0);
          }

          void t_InterSatellitesPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "class_", make_descriptor(InterSatellitesPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_InterSatellitesPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhaseAmbiguityModifier::wrap_Object(InterSatellitesPhaseAmbiguityModifier(((t_InterSatellitesPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesPhaseAmbiguityModifier_init_(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            InterSatellitesPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = InterSatellitesPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_getParametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modify(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_modifyWithoutDerivatives(t_InterSatellitesPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_InterSatellitesPhaseAmbiguityModifier_get__parametersDrivers(t_InterSatellitesPhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonEphemerisGenerator::class$ = NULL;
      jmethodID *PythonEphemerisGenerator::mids$ = NULL;
      bool PythonEphemerisGenerator::live$ = false;

      jclass PythonEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_e29a1189b47e1aad] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEphemerisGenerator::PythonEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonEphemerisGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self);
      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEphemerisGenerator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEphemerisGenerator, t_PythonEphemerisGenerator, PythonEphemerisGenerator);

      void t_PythonEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEphemerisGenerator), &PY_TYPE_DEF(PythonEphemerisGenerator), module, "PythonEphemerisGenerator", 1);
      }

      void t_PythonEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "class_", make_descriptor(PythonEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;", (void *) t_PythonEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonEphemerisGenerator::wrap_Object(PythonEphemerisGenerator(((t_PythonEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::BoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodType::class$ = NULL;
          jmethodID *PocMethodType::mids$ = NULL;
          bool PocMethodType::live$ = false;
          PocMethodType *PocMethodType::AKELLAALFRIEND_2000 = NULL;
          PocMethodType *PocMethodType::ALFANO_2005 = NULL;
          PocMethodType *PocMethodType::ALFANO_MAX_PROBABILITY = NULL;
          PocMethodType *PocMethodType::ALFANO_PARAL_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_TUBES_2007 = NULL;
          PocMethodType *PocMethodType::ALFANO_VOXELS_2006 = NULL;
          PocMethodType *PocMethodType::ALFRIEND_1999 = NULL;
          PocMethodType *PocMethodType::CHAN_1997 = NULL;
          PocMethodType *PocMethodType::CHAN_2003 = NULL;
          PocMethodType *PocMethodType::FOSTER_1992 = NULL;
          PocMethodType *PocMethodType::MCKINLEY_2006 = NULL;
          PocMethodType *PocMethodType::PATERA_2001 = NULL;
          PocMethodType *PocMethodType::PATERA_2003 = NULL;
          PocMethodType *PocMethodType::PATERA_2005 = NULL;

          jclass PocMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCCSDSName_0090f7797e403f43] = env->getMethodID(cls, "getCCSDSName", "()Ljava/lang/String;");
              mids$[mid_getMethodType_830fb81b25fc6619] = env->getMethodID(cls, "getMethodType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
              mids$[mid_valueOf_8efd99fe7ae4ed9b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_values_631d04901d5e04bf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/PocMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AKELLAALFRIEND_2000 = new PocMethodType(env->getStaticObjectField(cls, "AKELLAALFRIEND_2000", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_2005 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_MAX_PROBABILITY = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_PARAL_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_PARAL_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_TUBES_2007 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_TUBES_2007", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFANO_VOXELS_2006 = new PocMethodType(env->getStaticObjectField(cls, "ALFANO_VOXELS_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              ALFRIEND_1999 = new PocMethodType(env->getStaticObjectField(cls, "ALFRIEND_1999", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_1997 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_1997", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              CHAN_2003 = new PocMethodType(env->getStaticObjectField(cls, "CHAN_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              FOSTER_1992 = new PocMethodType(env->getStaticObjectField(cls, "FOSTER_1992", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              MCKINLEY_2006 = new PocMethodType(env->getStaticObjectField(cls, "MCKINLEY_2006", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2001 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2001", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2003 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2003", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              PATERA_2005 = new PocMethodType(env->getStaticObjectField(cls, "PATERA_2005", "Lorg/orekit/files/ccsds/definitions/PocMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String PocMethodType::getCCSDSName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCCSDSName_0090f7797e403f43]));
          }

          ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType PocMethodType::getMethodType() const
          {
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getMethodType_830fb81b25fc6619]));
          }

          PocMethodType PocMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8efd99fe7ae4ed9b], a0.this$));
          }

          JArray< PocMethodType > PocMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< PocMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_631d04901d5e04bf]));
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
        namespace definitions {
          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args);
          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self);
          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self);
          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_PocMethodType_values(PyTypeObject *type);
          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data);
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data);
          static PyGetSetDef t_PocMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodType, cCSDSName),
            DECLARE_GET_FIELD(t_PocMethodType, methodType),
            DECLARE_GET_FIELD(t_PocMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodType__methods_[] = {
            DECLARE_METHOD(t_PocMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_PocMethodType, getCCSDSName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, getMethodType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_PocMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodType)[] = {
            { Py_tp_methods, t_PocMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PocMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(PocMethodType, t_PocMethodType, PocMethodType);
          PyObject *t_PocMethodType::wrap_Object(const PocMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PocMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PocMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PocMethodType *self = (t_PocMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PocMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodType), &PY_TYPE_DEF(PocMethodType), module, "PocMethodType", 0);
          }

          void t_PocMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "class_", make_descriptor(PocMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "wrapfn_", make_descriptor(t_PocMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(PocMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "AKELLAALFRIEND_2000", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::AKELLAALFRIEND_2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_MAX_PROBABILITY", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_MAX_PROBABILITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_PARAL_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_PARAL_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_TUBES_2007", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_TUBES_2007)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFANO_VOXELS_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFANO_VOXELS_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "ALFRIEND_1999", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::ALFRIEND_1999)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_1997", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "CHAN_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::CHAN_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "FOSTER_1992", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::FOSTER_1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "MCKINLEY_2006", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::MCKINLEY_2006)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2001", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2001)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2003", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodType), "PATERA_2005", make_descriptor(t_PocMethodType::wrap_Object(*PocMethodType::PATERA_2005)));
          }

          static PyObject *t_PocMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodType::initializeClass, 1)))
              return NULL;
            return t_PocMethodType::wrap_Object(PocMethodType(((t_PocMethodType *) arg)->object.this$));
          }
          static PyObject *t_PocMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PocMethodType_of_(t_PocMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_PocMethodType_getCCSDSName(t_PocMethodType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCCSDSName());
            return j2p(result);
          }

          static PyObject *t_PocMethodType_getMethodType(t_PocMethodType *self)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::valueOf(a0));
              return t_PocMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_PocMethodType_values(PyTypeObject *type)
          {
            JArray< PocMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_PocMethodType::wrap_jobject);
          }
          static PyObject *t_PocMethodType_get__parameters_(t_PocMethodType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PocMethodType_get__cCSDSName(t_PocMethodType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCCSDSName());
            return j2p(value);
          }

          static PyObject *t_PocMethodType_get__methodType(t_PocMethodType *self, void *data)
          {
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMethodType());
            return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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
          mids$[mid_init$_2af49f877af16f8e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;)V");
          mids$[mid_init$_ec7b19091f399515] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPVCoordinates_20557c175f7cd899] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_5343d34e5fbffcdd] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2af49f877af16f8e, a0.this$)) {}

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec7b19091f399515, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_20557c175f7cd899], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AggregatedPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_5343d34e5fbffcdd], a0.this$, a1.this$));
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
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSOrbitalElements::class$ = NULL;
            jmethodID *GLONASSOrbitalElements::mids$ = NULL;
            bool GLONASSOrbitalElements::live$ = false;

            jclass GLONASSOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDeltaI_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaI", "()D");
                mids$[mid_getDeltaT_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaT", "()D");
                mids$[mid_getDeltaTDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaTDot", "()D");
                mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getGammaN_456d9a2f64d6b28d] = env->getMethodID(cls, "getGammaN", "()D");
                mids$[mid_getIOD_f2f64475e4580546] = env->getMethodID(cls, "getIOD", "()I");
                mids$[mid_getLambda_456d9a2f64d6b28d] = env->getMethodID(cls, "getLambda", "()D");
                mids$[mid_getN4_f2f64475e4580546] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_f2f64475e4580546] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getTN_456d9a2f64d6b28d] = env->getMethodID(cls, "getTN", "()D");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble GLONASSOrbitalElements::getDeltaI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaI_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getDeltaT() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaT_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getDeltaTDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaTDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getGammaN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGammaN_456d9a2f64d6b28d]);
            }

            jint GLONASSOrbitalElements::getIOD() const
            {
              return env->callIntMethod(this$, mids$[mid_getIOD_f2f64475e4580546]);
            }

            jdouble GLONASSOrbitalElements::getLambda() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLambda_456d9a2f64d6b28d]);
            }

            jint GLONASSOrbitalElements::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_f2f64475e4580546]);
            }

            jint GLONASSOrbitalElements::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_f2f64475e4580546]);
            }

            jdouble GLONASSOrbitalElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getTN() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTN_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSOrbitalElements::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_456d9a2f64d6b28d]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self);
            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data);
            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data);
            static PyGetSetDef t_GLONASSOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaI),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaT),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, deltaTDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, e),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, gammaN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, iOD),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, lambda),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, n4),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, na),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, pa),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, tN),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, time),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, x),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, y),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, z),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDot),
              DECLARE_GET_FIELD(t_GLONASSOrbitalElements, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_GLONASSOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaI, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaT, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getDeltaTDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getGammaN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getIOD, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getLambda, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTN, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSOrbitalElements, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSOrbitalElements)[] = {
              { Py_tp_methods, t_GLONASSOrbitalElements__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_GLONASSOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSOrbitalElements)[] = {
              &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
              NULL
            };

            DEFINE_TYPE(GLONASSOrbitalElements, t_GLONASSOrbitalElements, GLONASSOrbitalElements);

            void t_GLONASSOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSOrbitalElements), &PY_TYPE_DEF(GLONASSOrbitalElements), module, "GLONASSOrbitalElements", 0);
            }

            void t_GLONASSOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "class_", make_descriptor(GLONASSOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "wrapfn_", make_descriptor(t_GLONASSOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSOrbitalElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_GLONASSOrbitalElements::wrap_Object(GLONASSOrbitalElements(((t_GLONASSOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_GLONASSOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaI(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaT(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaT());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getDeltaTDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getE(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getGammaN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGammaN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getIOD(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIOD());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getLambda(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLambda());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getN4(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getNa(t_GLONASSOrbitalElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getPa(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTN(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTN());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getTime(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getX(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getXDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getY(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getYDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZ(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_getZDotDot(t_GLONASSOrbitalElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaI(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaI());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaT(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaT());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__deltaTDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaTDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__e(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__gammaN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGammaN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__iOD(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIOD());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__lambda(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLambda());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__n4(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__na(t_GLONASSOrbitalElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__pa(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__tN(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTN());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__time(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__x(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__xDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__y(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__yDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__z(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSOrbitalElements_get__zDotDot(t_GLONASSOrbitalElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/LofOffset.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffset::class$ = NULL;
      jmethodID *LofOffset::mids$ = NULL;
      bool LofOffset::live$ = false;

      jclass LofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_907a2084a7036347] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_3f1d517820e7775e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;DDD)V");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_969253bc78d7a272] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_01363f58d35f60d4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_907a2084a7036347, a0.this$, a1.this$)) {}

      LofOffset::LofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f1d517820e7775e, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_969253bc78d7a272], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffset::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_01363f58d35f60d4], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args);
      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args);

      static PyMethodDef t_LofOffset__methods_[] = {
        DECLARE_METHOD(t_LofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffset, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffset)[] = {
        { Py_tp_methods, t_LofOffset__methods_ },
        { Py_tp_init, (void *) t_LofOffset_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LofOffset, t_LofOffset, LofOffset);

      void t_LofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffset), &PY_TYPE_DEF(LofOffset), module, "LofOffset", 0);
      }

      void t_LofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "class_", make_descriptor(LofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "wrapfn_", make_descriptor(t_LofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffset::initializeClass, 1)))
          return NULL;
        return t_LofOffset::wrap_Object(LofOffset(((t_LofOffset *) arg)->object.this$));
      }
      static PyObject *t_LofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffset_init_(t_LofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LofOffset(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            LofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKDDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = LofOffset(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_LofOffset_getAttitude(t_LofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_LofOffset_getAttitudeRotation(t_LofOffset *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeStateHistory::class$ = NULL;
              jmethodID *AttitudeStateHistory::mids$ = NULL;
              bool AttitudeStateHistory::live$ = false;

              jclass AttitudeStateHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_be98a943865cb07a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAttitudeStates_a6156df500549a58] = env->getMethodID(cls, "getAttitudeStates", "()Ljava/util/List;");
                  mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMetadata_3ed6d67cff982ef3] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistoryMetadata;");
                  mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeStateHistory::AttitudeStateHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be98a943865cb07a, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeStateHistory::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_a6156df500549a58]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AttitudeStateHistory::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_05a2839e8fecde67]));
              }

              ::java::util::List AttitudeStateHistory::getAttitudeStates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_a6156df500549a58]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeStateHistory::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c14c1c09874639c8]));
              }

              ::java::lang::String AttitudeStateHistory::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
              }

              jint AttitudeStateHistory::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata AttitudeStateHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_3ed6d67cff982ef3]));
              }

              ::org::orekit::frames::Frame AttitudeStateHistory::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeStateHistory::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
            namespace acm {
              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self);
              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data);
              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data);
              static PyGetSetDef t_AttitudeStateHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeStateHistory, angularCoordinates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeProvider),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, attitudeStates),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationMethod),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, interpolationSamples),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, metadata),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, referenceFrame),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, start),
                DECLARE_GET_FIELD(t_AttitudeStateHistory, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeStateHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeStateHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getMetadata, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeStateHistory, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeStateHistory)[] = {
                { Py_tp_methods, t_AttitudeStateHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeStateHistory_init_ },
                { Py_tp_getset, t_AttitudeStateHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeStateHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeStateHistory, t_AttitudeStateHistory, AttitudeStateHistory);

              void t_AttitudeStateHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeStateHistory), &PY_TYPE_DEF(AttitudeStateHistory), module, "AttitudeStateHistory", 0);
              }

              void t_AttitudeStateHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "class_", make_descriptor(AttitudeStateHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "wrapfn_", make_descriptor(t_AttitudeStateHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeStateHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeStateHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeStateHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeStateHistory::wrap_Object(AttitudeStateHistory(((t_AttitudeStateHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeStateHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeStateHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeStateHistory_init_(t_AttitudeStateHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeStateHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeStateHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeStateHistory_getAngularCoordinates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeProvider(t_AttitudeStateHistory *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getAttitudeStates(t_AttitudeStateHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeState));
              }

              static PyObject *t_AttitudeStateHistory_getAvailableDerivatives(t_AttitudeStateHistory *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationMethod(t_AttitudeStateHistory *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AttitudeStateHistory_getInterpolationSamples(t_AttitudeStateHistory *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeStateHistory_getMetadata(t_AttitudeStateHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getReferenceFrame(t_AttitudeStateHistory *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStart(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_getStop(t_AttitudeStateHistory *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeStateHistory_get__angularCoordinates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeProvider(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__attitudeStates(t_AttitudeStateHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__availableDerivatives(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationMethod(t_AttitudeStateHistory *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AttitudeStateHistory_get__interpolationSamples(t_AttitudeStateHistory *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AttitudeStateHistory_get__metadata(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeStateHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeStateHistoryMetadata::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__referenceFrame(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__start(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeStateHistory_get__stop(t_AttitudeStateHistory *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
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
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/MagneticFieldDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_428e0682e401f288] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_872b82e95dd440ae] = env->getMethodID(cls, "<init>", "(DLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_45c00007c9df9fce] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;Z)V");
            mids$[mid_init$_b45d2518a3f0d70b] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;Lorg/orekit/bodies/OneAxisEllipsoid;ZLorg/orekit/data/DataContext;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_addb10d7335cc8cb] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/MagneticFieldDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_428e0682e401f288, a0, a1.this$, a2.this$)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jboolean a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_872b82e95dd440ae, a0, a1.this$, a2.this$, a3)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_45c00007c9df9fce, a0, a1, a2, a3.this$, a4.this$, a5)) {}

        MagneticFieldDetector::MagneticFieldDetector(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a3, const ::org::orekit::bodies::OneAxisEllipsoid & a4, jboolean a5, const ::org::orekit::data::DataContext & a6) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b45d2518a3f0d70b, a0, a1, a2, a3.this$, a4.this$, a5, a6.this$)) {}

        jdouble MagneticFieldDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        void MagneticFieldDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
#include "org/hipparchus/analysis/function/Atan2.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Atan2::class$ = NULL;
        jmethodID *Atan2::mids$ = NULL;
        bool Atan2::live$ = false;

        jclass Atan2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Atan2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Atan2::Atan2() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Atan2::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args);

        static PyMethodDef t_Atan2__methods_[] = {
          DECLARE_METHOD(t_Atan2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Atan2, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Atan2)[] = {
          { Py_tp_methods, t_Atan2__methods_ },
          { Py_tp_init, (void *) t_Atan2_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Atan2)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Atan2, t_Atan2, Atan2);

        void t_Atan2::install(PyObject *module)
        {
          installType(&PY_TYPE(Atan2), &PY_TYPE_DEF(Atan2), module, "Atan2", 0);
        }

        void t_Atan2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "class_", make_descriptor(Atan2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "wrapfn_", make_descriptor(t_Atan2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Atan2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Atan2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Atan2::initializeClass, 1)))
            return NULL;
          return t_Atan2::wrap_Object(Atan2(((t_Atan2 *) arg)->object.this$));
        }
        static PyObject *t_Atan2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Atan2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Atan2_init_(t_Atan2 *self, PyObject *args, PyObject *kwds)
        {
          Atan2 object((jobject) NULL);

          INT_CALL(object = Atan2());
          self->object = object;

          return 0;
        }

        static PyObject *t_Atan2_value(t_Atan2 *self, PyObject *args)
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
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/NavigationSystem.h"
#include "org/orekit/gnss/metric/ntrip/DataFormat.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/CarrierPhase.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *DataStreamRecord::class$ = NULL;
          jmethodID *DataStreamRecord::mids$ = NULL;
          bool DataStreamRecord::live$ = false;

          jclass DataStreamRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/DataStreamRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_e470b6d9e0d979db] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_5f15d37696ebc041] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getBitRate_f2f64475e4580546] = env->getMethodID(cls, "getBitRate", "()I");
              mids$[mid_getCarrierPhase_93211f8bfa76be46] = env->getMethodID(cls, "getCarrierPhase", "()Lorg/orekit/gnss/metric/ntrip/CarrierPhase;");
              mids$[mid_getCompressionEncryption_0090f7797e403f43] = env->getMethodID(cls, "getCompressionEncryption", "()Ljava/lang/String;");
              mids$[mid_getCountry_0090f7797e403f43] = env->getMethodID(cls, "getCountry", "()Ljava/lang/String;");
              mids$[mid_getFormat_2eb538e7e8cbc4c3] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/gnss/metric/ntrip/DataFormat;");
              mids$[mid_getFormatDetails_a6156df500549a58] = env->getMethodID(cls, "getFormatDetails", "()Ljava/util/List;");
              mids$[mid_getGenerator_0090f7797e403f43] = env->getMethodID(cls, "getGenerator", "()Ljava/lang/String;");
              mids$[mid_getLatitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLatitude", "()D");
              mids$[mid_getLongitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getLongitude", "()D");
              mids$[mid_getMountPoint_0090f7797e403f43] = env->getMethodID(cls, "getMountPoint", "()Ljava/lang/String;");
              mids$[mid_getNavigationSystems_a6156df500549a58] = env->getMethodID(cls, "getNavigationSystems", "()Ljava/util/List;");
              mids$[mid_getNetwork_0090f7797e403f43] = env->getMethodID(cls, "getNetwork", "()Ljava/lang/String;");
              mids$[mid_getRecordType_9f311496246ad578] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getSourceIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getSourceIdentifier", "()Ljava/lang/String;");
              mids$[mid_isNMEARequired_e470b6d9e0d979db] = env->getMethodID(cls, "isNMEARequired", "()Z");
              mids$[mid_isNetworked_e470b6d9e0d979db] = env->getMethodID(cls, "isNetworked", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DataStreamRecord::DataStreamRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

          jboolean DataStreamRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_e470b6d9e0d979db]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication DataStreamRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_5f15d37696ebc041]));
          }

          jint DataStreamRecord::getBitRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getBitRate_f2f64475e4580546]);
          }

          ::org::orekit::gnss::metric::ntrip::CarrierPhase DataStreamRecord::getCarrierPhase() const
          {
            return ::org::orekit::gnss::metric::ntrip::CarrierPhase(env->callObjectMethod(this$, mids$[mid_getCarrierPhase_93211f8bfa76be46]));
          }

          ::java::lang::String DataStreamRecord::getCompressionEncryption() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCompressionEncryption_0090f7797e403f43]));
          }

          ::java::lang::String DataStreamRecord::getCountry() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCountry_0090f7797e403f43]));
          }

          ::org::orekit::gnss::metric::ntrip::DataFormat DataStreamRecord::getFormat() const
          {
            return ::org::orekit::gnss::metric::ntrip::DataFormat(env->callObjectMethod(this$, mids$[mid_getFormat_2eb538e7e8cbc4c3]));
          }

          ::java::util::List DataStreamRecord::getFormatDetails() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormatDetails_a6156df500549a58]));
          }

          ::java::lang::String DataStreamRecord::getGenerator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getGenerator_0090f7797e403f43]));
          }

          jdouble DataStreamRecord::getLatitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLatitude_456d9a2f64d6b28d]);
          }

          jdouble DataStreamRecord::getLongitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLongitude_456d9a2f64d6b28d]);
          }

          ::java::lang::String DataStreamRecord::getMountPoint() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMountPoint_0090f7797e403f43]));
          }

          ::java::util::List DataStreamRecord::getNavigationSystems() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNavigationSystems_a6156df500549a58]));
          }

          ::java::lang::String DataStreamRecord::getNetwork() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetwork_0090f7797e403f43]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType DataStreamRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_9f311496246ad578]));
          }

          ::java::lang::String DataStreamRecord::getSourceIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceIdentifier_0090f7797e403f43]));
          }

          jboolean DataStreamRecord::isNMEARequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNMEARequired_e470b6d9e0d979db]);
          }

          jboolean DataStreamRecord::isNetworked() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNetworked_e470b6d9e0d979db]);
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
      namespace metric {
        namespace ntrip {
          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args);
          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self);
          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data);
          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data);
          static PyGetSetDef t_DataStreamRecord__fields_[] = {
            DECLARE_GET_FIELD(t_DataStreamRecord, authentication),
            DECLARE_GET_FIELD(t_DataStreamRecord, bitRate),
            DECLARE_GET_FIELD(t_DataStreamRecord, carrierPhase),
            DECLARE_GET_FIELD(t_DataStreamRecord, compressionEncryption),
            DECLARE_GET_FIELD(t_DataStreamRecord, country),
            DECLARE_GET_FIELD(t_DataStreamRecord, format),
            DECLARE_GET_FIELD(t_DataStreamRecord, formatDetails),
            DECLARE_GET_FIELD(t_DataStreamRecord, generator),
            DECLARE_GET_FIELD(t_DataStreamRecord, latitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, longitude),
            DECLARE_GET_FIELD(t_DataStreamRecord, mountPoint),
            DECLARE_GET_FIELD(t_DataStreamRecord, nMEARequired),
            DECLARE_GET_FIELD(t_DataStreamRecord, navigationSystems),
            DECLARE_GET_FIELD(t_DataStreamRecord, network),
            DECLARE_GET_FIELD(t_DataStreamRecord, networked),
            DECLARE_GET_FIELD(t_DataStreamRecord, recordType),
            DECLARE_GET_FIELD(t_DataStreamRecord, sourceIdentifier),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DataStreamRecord__methods_[] = {
            DECLARE_METHOD(t_DataStreamRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataStreamRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getBitRate, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCarrierPhase, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCompressionEncryption, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getCountry, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormat, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getFormatDetails, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getGenerator, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLatitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getLongitude, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getMountPoint, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNavigationSystems, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getNetwork, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_DataStreamRecord, getSourceIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNMEARequired, METH_NOARGS),
            DECLARE_METHOD(t_DataStreamRecord, isNetworked, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataStreamRecord)[] = {
            { Py_tp_methods, t_DataStreamRecord__methods_ },
            { Py_tp_init, (void *) t_DataStreamRecord_init_ },
            { Py_tp_getset, t_DataStreamRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataStreamRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(DataStreamRecord, t_DataStreamRecord, DataStreamRecord);

          void t_DataStreamRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(DataStreamRecord), &PY_TYPE_DEF(DataStreamRecord), module, "DataStreamRecord", 0);
          }

          void t_DataStreamRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "class_", make_descriptor(DataStreamRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "wrapfn_", make_descriptor(t_DataStreamRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataStreamRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataStreamRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataStreamRecord::initializeClass, 1)))
              return NULL;
            return t_DataStreamRecord::wrap_Object(DataStreamRecord(((t_DataStreamRecord *) arg)->object.this$));
          }
          static PyObject *t_DataStreamRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataStreamRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DataStreamRecord_init_(t_DataStreamRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            DataStreamRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = DataStreamRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DataStreamRecord_areFeesRequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_getAuthentication(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getBitRate(t_DataStreamRecord *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getBitRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_DataStreamRecord_getCarrierPhase(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase result((jobject) NULL);
            OBJ_CALL(result = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getCompressionEncryption(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCompressionEncryption());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getCountry(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCountry());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getFormat(t_DataStreamRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(result);
          }

          static PyObject *t_DataStreamRecord_getFormatDetails(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(StreamedMessage));
          }

          static PyObject *t_DataStreamRecord_getGenerator(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getGenerator());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getLatitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLatitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getLongitude(t_DataStreamRecord *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLongitude());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_DataStreamRecord_getMountPoint(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMountPoint());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getNavigationSystems(t_DataStreamRecord *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NavigationSystem));
          }

          static PyObject *t_DataStreamRecord_getNetwork(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetwork());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_getRecordType(t_DataStreamRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DataStreamRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_DataStreamRecord_getSourceIdentifier(t_DataStreamRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceIdentifier());
            return j2p(result);
          }

          static PyObject *t_DataStreamRecord_isNMEARequired(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNMEARequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_isNetworked(t_DataStreamRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNetworked());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_DataStreamRecord_get__authentication(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__bitRate(t_DataStreamRecord *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getBitRate());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_DataStreamRecord_get__carrierPhase(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::CarrierPhase value((jobject) NULL);
            OBJ_CALL(value = self->object.getCarrierPhase());
            return ::org::orekit::gnss::metric::ntrip::t_CarrierPhase::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__compressionEncryption(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCompressionEncryption());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__country(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCountry());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__format(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::DataFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormat());
            return ::org::orekit::gnss::metric::ntrip::t_DataFormat::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__formatDetails(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFormatDetails());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__generator(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getGenerator());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__latitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLatitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__longitude(t_DataStreamRecord *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLongitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_DataStreamRecord_get__mountPoint(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMountPoint());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__nMEARequired(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNMEARequired());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__navigationSystems(t_DataStreamRecord *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNavigationSystems());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__network(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetwork());
            return j2p(value);
          }

          static PyObject *t_DataStreamRecord_get__networked(t_DataStreamRecord *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNetworked());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_DataStreamRecord_get__recordType(t_DataStreamRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_DataStreamRecord_get__sourceIdentifier(t_DataStreamRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceIdentifier());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/GTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *GTest::class$ = NULL;
        jmethodID *GTest::mids$ = NULL;
        bool GTest::live$ = false;

        jclass GTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/GTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_g_bea0e17cbbf5365f] = env->getMethodID(cls, "g", "([D[J)D");
            mids$[mid_gDataSetsComparison_84aeba7caf131216] = env->getMethodID(cls, "gDataSetsComparison", "([J[J)D");
            mids$[mid_gTest_bea0e17cbbf5365f] = env->getMethodID(cls, "gTest", "([D[J)D");
            mids$[mid_gTest_1663c18e69b1b60e] = env->getMethodID(cls, "gTest", "([D[JD)Z");
            mids$[mid_gTestDataSetsComparison_84aeba7caf131216] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[J)D");
            mids$[mid_gTestDataSetsComparison_c7887040a8242925] = env->getMethodID(cls, "gTestDataSetsComparison", "([J[JD)Z");
            mids$[mid_gTestIntrinsic_bea0e17cbbf5365f] = env->getMethodID(cls, "gTestIntrinsic", "([D[J)D");
            mids$[mid_rootLogLikelihoodRatio_076d964adec38696] = env->getMethodID(cls, "rootLogLikelihoodRatio", "(JJJJ)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GTest::GTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble GTest::g(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble GTest::gDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jdouble GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTest_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jboolean GTest::gTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTest_1663c18e69b1b60e], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestDataSetsComparison_84aeba7caf131216], a0.this$, a1.this$);
        }

        jboolean GTest::gTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_gTestDataSetsComparison_c7887040a8242925], a0.this$, a1.this$, a2);
        }

        jdouble GTest::gTestIntrinsic(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_gTestIntrinsic_bea0e17cbbf5365f], a0.this$, a1.this$);
        }

        jdouble GTest::rootLogLikelihoodRatio(jlong a0, jlong a1, jlong a2, jlong a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_rootLogLikelihoodRatio_076d964adec38696], a0, a1, a2, a3);
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
      namespace inference {
        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GTest_g(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args);
        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args);

        static PyMethodDef t_GTest__methods_[] = {
          DECLARE_METHOD(t_GTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GTest, g, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTest, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_GTest, gTestIntrinsic, METH_VARARGS),
          DECLARE_METHOD(t_GTest, rootLogLikelihoodRatio, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GTest)[] = {
          { Py_tp_methods, t_GTest__methods_ },
          { Py_tp_init, (void *) t_GTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GTest, t_GTest, GTest);

        void t_GTest::install(PyObject *module)
        {
          installType(&PY_TYPE(GTest), &PY_TYPE_DEF(GTest), module, "GTest", 0);
        }

        void t_GTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "class_", make_descriptor(GTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "wrapfn_", make_descriptor(t_GTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GTest::initializeClass, 1)))
            return NULL;
          return t_GTest::wrap_Object(GTest(((t_GTest *) arg)->object.this$));
        }
        static PyObject *t_GTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GTest_init_(t_GTest *self, PyObject *args, PyObject *kwds)
        {
          GTest object((jobject) NULL);

          INT_CALL(object = GTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_GTest_g(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.g(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", args);
          return NULL;
        }

        static PyObject *t_GTest_gDataSetsComparison(t_GTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTest(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTest", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestDataSetsComparison(t_GTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.gTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "gTestDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_GTest_gTestIntrinsic(t_GTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gTestIntrinsic(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "gTestIntrinsic", args);
          return NULL;
        }

        static PyObject *t_GTest_rootLogLikelihoodRatio(t_GTest *self, PyObject *args)
        {
          jlong a0;
          jlong a1;
          jlong a2;
          jlong a3;
          jdouble result;

          if (!parseArgs(args, "JJJJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.rootLogLikelihoodRatio(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootLogLikelihoodRatio", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CivilianNavigationMessage::class$ = NULL;
            jmethodID *CivilianNavigationMessage::mids$ = NULL;
            bool CivilianNavigationMessage::live$ = false;
            ::java::lang::String *CivilianNavigationMessage::CNAV = NULL;
            ::java::lang::String *CivilianNavigationMessage::CNV2 = NULL;

            jclass CivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getIscL1CA_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL1CA", "()D");
                mids$[mid_getIscL1CD_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL1CD", "()D");
                mids$[mid_getIscL1CP_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL1CP", "()D");
                mids$[mid_getIscL2C_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL2C", "()D");
                mids$[mid_getIscL5I5_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL5I5", "()D");
                mids$[mid_getIscL5Q5_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscL5Q5", "()D");
                mids$[mid_getSvAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_f2f64475e4580546] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_getUraiEd_f2f64475e4580546] = env->getMethodID(cls, "getUraiEd", "()I");
                mids$[mid_getUraiNed0_f2f64475e4580546] = env->getMethodID(cls, "getUraiNed0", "()I");
                mids$[mid_getUraiNed1_f2f64475e4580546] = env->getMethodID(cls, "getUraiNed1", "()I");
                mids$[mid_getUraiNed2_f2f64475e4580546] = env->getMethodID(cls, "getUraiNed2", "()I");
                mids$[mid_isCnv2_e470b6d9e0d979db] = env->getMethodID(cls, "isCnv2", "()Z");
                mids$[mid_setADot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setIscL1CA_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL1CA", "(D)V");
                mids$[mid_setIscL1CD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL1CD", "(D)V");
                mids$[mid_setIscL1CP_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL1CP", "(D)V");
                mids$[mid_setIscL2C_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL2C", "(D)V");
                mids$[mid_setIscL5I5_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL5I5", "(D)V");
                mids$[mid_setIscL5Q5_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscL5Q5", "(D)V");
                mids$[mid_setSvAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTGD", "(D)V");
                mids$[mid_setUraiEd_0a2a1ac2721c0336] = env->getMethodID(cls, "setUraiEd", "(I)V");
                mids$[mid_setUraiNed0_0a2a1ac2721c0336] = env->getMethodID(cls, "setUraiNed0", "(I)V");
                mids$[mid_setUraiNed1_0a2a1ac2721c0336] = env->getMethodID(cls, "setUraiNed1", "(I)V");
                mids$[mid_setUraiNed2_0a2a1ac2721c0336] = env->getMethodID(cls, "setUraiNed2", "(I)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNAV = new ::java::lang::String(env->getStaticObjectField(cls, "CNAV", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble CivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL1CA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CA_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CD_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL1CP_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL2C() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL2C_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL5I5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5I5_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getIscL5Q5() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscL5Q5_456d9a2f64d6b28d]);
            }

            jdouble CivilianNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_456d9a2f64d6b28d]);
            }

            jint CivilianNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_f2f64475e4580546]);
            }

            jdouble CivilianNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_456d9a2f64d6b28d]);
            }

            jint CivilianNavigationMessage::getUraiEd() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiEd_f2f64475e4580546]);
            }

            jint CivilianNavigationMessage::getUraiNed0() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed0_f2f64475e4580546]);
            }

            jint CivilianNavigationMessage::getUraiNed1() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed1_f2f64475e4580546]);
            }

            jint CivilianNavigationMessage::getUraiNed2() const
            {
              return env->callIntMethod(this$, mids$[mid_getUraiNed2_f2f64475e4580546]);
            }

            jboolean CivilianNavigationMessage::isCnv2() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCnv2_e470b6d9e0d979db]);
            }

            void CivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL1CA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CA_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CD_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL1CP_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL2C(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL2C_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL5I5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5I5_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setIscL5Q5(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscL5Q5_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_0a2a1ac2721c0336], a0);
            }

            void CivilianNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_77e0f9a1f260e2e5], a0);
            }

            void CivilianNavigationMessage::setUraiEd(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiEd_0a2a1ac2721c0336], a0);
            }

            void CivilianNavigationMessage::setUraiNed0(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed0_0a2a1ac2721c0336], a0);
            }

            void CivilianNavigationMessage::setUraiNed1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed1_0a2a1ac2721c0336], a0);
            }

            void CivilianNavigationMessage::setUraiNed2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUraiNed2_0a2a1ac2721c0336], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self);
            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data);
            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data);
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_CivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, aDot),
              DECLARE_GET_FIELD(t_CivilianNavigationMessage, cnv2),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CA),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL1CP),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL2C),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5I5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, iscL5Q5),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, tGD),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiEd),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed0),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed1),
              DECLARE_GETSET_FIELD(t_CivilianNavigationMessage, uraiNed2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_CivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CA, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL1CP, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL2C, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5I5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getIscL5Q5, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiEd, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed0, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed1, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, getUraiNed2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, isCnv2, METH_NOARGS),
              DECLARE_METHOD(t_CivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CA, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL1CP, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL2C, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5I5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setIscL5Q5, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setTGD, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiEd, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed0, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed1, METH_O),
              DECLARE_METHOD(t_CivilianNavigationMessage, setUraiNed2, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CivilianNavigationMessage)[] = {
              { Py_tp_methods, t_CivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(CivilianNavigationMessage, t_CivilianNavigationMessage, CivilianNavigationMessage);

            void t_CivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(CivilianNavigationMessage), &PY_TYPE_DEF(CivilianNavigationMessage), module, "CivilianNavigationMessage", 0);
            }

            void t_CivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "class_", make_descriptor(CivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "wrapfn_", make_descriptor(t_CivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(CivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNAV", make_descriptor(j2p(*CivilianNavigationMessage::CNAV)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CivilianNavigationMessage), "CNV2", make_descriptor(j2p(*CivilianNavigationMessage::CNV2)));
            }

            static PyObject *t_CivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_CivilianNavigationMessage::wrap_Object(CivilianNavigationMessage(((t_CivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_CivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CivilianNavigationMessage_getADot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getDeltaN0Dot(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CA(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL1CP(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL2C(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL2C());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5I5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getIscL5Q5(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvAccuracy(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getSvHealth(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getTGD(t_CivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiEd(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiEd());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed0(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed0());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed1(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_getUraiNed2(t_CivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getUraiNed2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CivilianNavigationMessage_isCnv2(t_CivilianNavigationMessage *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isCnv2());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_CivilianNavigationMessage_setADot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setDeltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CA(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CA", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL1CP(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL1CP", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL2C(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL2C(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL2C", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5I5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5I5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5I5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setIscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscL5Q5(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscL5Q5", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvAccuracy(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setSvHealth(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setTGD(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiEd(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiEd(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiEd", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed0(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed0", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed1(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed1", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_setUraiNed2(t_CivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setUraiNed2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUraiNed2", arg);
              return NULL;
            }

            static PyObject *t_CivilianNavigationMessage_get__aDot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__aDot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__cnv2(t_CivilianNavigationMessage *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isCnv2());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_CivilianNavigationMessage_get__deltaN0Dot(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__deltaN0Dot(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CA(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CA(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CA", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL1CP(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL1CP(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL1CP", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL2C(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL2C());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL2C(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL2C(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL2C", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5I5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5I5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5I5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5I5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5I5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__iscL5Q5(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscL5Q5());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__iscL5Q5(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscL5Q5(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscL5Q5", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svAccuracy(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__svAccuracy(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__svHealth(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__svHealth(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__tGD(t_CivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CivilianNavigationMessage_set__tGD(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiEd(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiEd());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiEd(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiEd(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiEd", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed0(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed0());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed0(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed0", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed1(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed1());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed1(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed1", arg);
              return -1;
            }

            static PyObject *t_CivilianNavigationMessage_get__uraiNed2(t_CivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getUraiNed2());
              return PyLong_FromLong((long) value);
            }
            static int t_CivilianNavigationMessage_set__uraiNed2(t_CivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setUraiNed2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uraiNed2", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frame.h"
#include "java/io/Serializable.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Frame::class$ = NULL;
      jmethodID *Frame::mids$ = NULL;
      bool Frame::live$ = false;

      jclass Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4d900b4c52a404d9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;)V");
          mids$[mid_init$_7a37becabe54df7d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;)V");
          mids$[mid_init$_3b080937682107f9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Transform;Ljava/lang/String;Z)V");
          mids$[mid_init$_a79dd5c32ebf7fea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/TransformProvider;Ljava/lang/String;Z)V");
          mids$[mid_getAncestor_8357b90e78910c88] = env->getMethodID(cls, "getAncestor", "(I)Lorg/orekit/frames/Frame;");
          mids$[mid_getDepth_f2f64475e4580546] = env->getMethodID(cls, "getDepth", "()I");
          mids$[mid_getFrozenFrame_5f0fa436726d35c8] = env->getMethodID(cls, "getFrozenFrame", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getParent_c8fe21bcdac65bf6] = env->getMethodID(cls, "getParent", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRoot_c8fe21bcdac65bf6] = env->getStaticMethodID(cls, "getRoot", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getStaticTransformTo_45c7482c9fa9b39a] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransformTo_b08047c3dc3b3990] = env->getMethodID(cls, "getStaticTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransformProvider_9b4010550f8e9669] = env->getMethodID(cls, "getTransformProvider", "()Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getTransformTo_77d7d77f32eef8df] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransformTo_bbda212ac61abf9a] = env->getMethodID(cls, "getTransformTo", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_isChildOf_624313f3a90c38c1] = env->getMethodID(cls, "isChildOf", "(Lorg/orekit/frames/Frame;)Z");
          mids$[mid_isPseudoInertial_e470b6d9e0d979db] = env->getMethodID(cls, "isPseudoInertial", "()Z");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d900b4c52a404d9, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7a37becabe54df7d, a0.this$, a1.this$, a2.this$)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::Transform & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b080937682107f9, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame::Frame(const Frame & a0, const ::org::orekit::frames::TransformProvider & a1, const ::java::lang::String & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a79dd5c32ebf7fea, a0.this$, a1.this$, a2.this$, a3)) {}

      Frame Frame::getAncestor(jint a0) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getAncestor_8357b90e78910c88], a0));
      }

      jint Frame::getDepth() const
      {
        return env->callIntMethod(this$, mids$[mid_getDepth_f2f64475e4580546]);
      }

      Frame Frame::getFrozenFrame(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::java::lang::String & a2) const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getFrozenFrame_5f0fa436726d35c8], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String Frame::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      Frame Frame::getParent() const
      {
        return Frame(env->callObjectMethod(this$, mids$[mid_getParent_c8fe21bcdac65bf6]));
      }

      Frame Frame::getRoot()
      {
        jclass cls = env->getClass(initializeClass);
        return Frame(env->callStaticObjectMethod(cls, mids$[mid_getRoot_c8fe21bcdac65bf6]));
      }

      ::org::orekit::frames::StaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_45c7482c9fa9b39a], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldStaticTransform Frame::getStaticTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransformTo_b08047c3dc3b3990], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider Frame::getTransformProvider() const
      {
        return ::org::orekit::frames::TransformProvider(env->callObjectMethod(this$, mids$[mid_getTransformProvider_9b4010550f8e9669]));
      }

      ::org::orekit::frames::Transform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransformTo_77d7d77f32eef8df], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform Frame::getTransformTo(const Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransformTo_bbda212ac61abf9a], a0.this$, a1.this$));
      }

      jboolean Frame::isChildOf(const Frame & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isChildOf_624313f3a90c38c1], a0.this$);
      }

      jboolean Frame::isPseudoInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isPseudoInertial_e470b6d9e0d979db]);
      }

      ::java::lang::String Frame::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_getDepth(t_Frame *self);
      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getName(t_Frame *self);
      static PyObject *t_Frame_getParent(t_Frame *self);
      static PyObject *t_Frame_getRoot(PyTypeObject *type);
      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_getTransformProvider(t_Frame *self);
      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg);
      static PyObject *t_Frame_isPseudoInertial(t_Frame *self);
      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args);
      static PyObject *t_Frame_get__depth(t_Frame *self, void *data);
      static PyObject *t_Frame_get__name(t_Frame *self, void *data);
      static PyObject *t_Frame_get__parent(t_Frame *self, void *data);
      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data);
      static PyObject *t_Frame_get__root(t_Frame *self, void *data);
      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data);
      static PyGetSetDef t_Frame__fields_[] = {
        DECLARE_GET_FIELD(t_Frame, depth),
        DECLARE_GET_FIELD(t_Frame, name),
        DECLARE_GET_FIELD(t_Frame, parent),
        DECLARE_GET_FIELD(t_Frame, pseudoInertial),
        DECLARE_GET_FIELD(t_Frame, root),
        DECLARE_GET_FIELD(t_Frame, transformProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Frame__methods_[] = {
        DECLARE_METHOD(t_Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Frame, getAncestor, METH_O),
        DECLARE_METHOD(t_Frame, getDepth, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getFrozenFrame, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getName, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getParent, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getRoot, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_Frame, getStaticTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, getTransformProvider, METH_NOARGS),
        DECLARE_METHOD(t_Frame, getTransformTo, METH_VARARGS),
        DECLARE_METHOD(t_Frame, isChildOf, METH_O),
        DECLARE_METHOD(t_Frame, isPseudoInertial, METH_NOARGS),
        DECLARE_METHOD(t_Frame, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Frame)[] = {
        { Py_tp_methods, t_Frame__methods_ },
        { Py_tp_init, (void *) t_Frame_init_ },
        { Py_tp_getset, t_Frame__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Frame)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Frame, t_Frame, Frame);

      void t_Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(Frame), &PY_TYPE_DEF(Frame), module, "Frame", 0);
      }

      void t_Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "class_", make_descriptor(Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "wrapfn_", make_descriptor(t_Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Frame::initializeClass, 1)))
          return NULL;
        return t_Frame::wrap_Object(Frame(((t_Frame *) arg)->object.this$));
      }
      static PyObject *t_Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Frame_init_(t_Frame *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Frame(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::Transform a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::frames::TransformProvider a1((jobject) NULL);
            ::java::lang::String a2((jobject) NULL);
            jboolean a3;
            Frame object((jobject) NULL);

            if (!parseArgs(args, "kksZ", Frame::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Frame(a0, a1, a2, a3));
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

      static PyObject *t_Frame_getAncestor(t_Frame *self, PyObject *arg)
      {
        jint a0;
        Frame result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getAncestor(a0));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAncestor", arg);
        return NULL;
      }

      static PyObject *t_Frame_getDepth(t_Frame *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDepth());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Frame_getFrozenFrame(t_Frame *self, PyObject *args)
      {
        Frame a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        Frame result((jobject) NULL);

        if (!parseArgs(args, "kks", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.getFrozenFrame(a0, a1, a2));
          return t_Frame::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrozenFrame", args);
        return NULL;
      }

      static PyObject *t_Frame_getName(t_Frame *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_Frame_getParent(t_Frame *self)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getParent());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getRoot(PyTypeObject *type)
      {
        Frame result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::Frame::getRoot());
        return t_Frame::wrap_Object(result);
      }

      static PyObject *t_Frame_getStaticTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_getTransformProvider(t_Frame *self)
      {
        ::org::orekit::frames::TransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
      }

      static PyObject *t_Frame_getTransformTo(t_Frame *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kK", Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransformTo(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformTo", args);
        return NULL;
      }

      static PyObject *t_Frame_isChildOf(t_Frame *self, PyObject *arg)
      {
        Frame a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isChildOf(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isChildOf", arg);
        return NULL;
      }

      static PyObject *t_Frame_isPseudoInertial(t_Frame *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isPseudoInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Frame_toString(t_Frame *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Frame), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Frame_get__depth(t_Frame *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDepth());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Frame_get__name(t_Frame *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_Frame_get__parent(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getParent());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__pseudoInertial(t_Frame *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isPseudoInertial());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Frame_get__root(t_Frame *self, void *data)
      {
        Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoot());
        return t_Frame::wrap_Object(value);
      }

      static PyObject *t_Frame_get__transformProvider(t_Frame *self, void *data)
      {
        ::org::orekit::frames::TransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformProvider());
        return ::org::orekit::frames::t_TransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *MonotoneChain::class$ = NULL;
            jmethodID *MonotoneChain::mids$ = NULL;
            bool MonotoneChain::live$ = false;

            jclass MonotoneChain::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/MonotoneChain");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
                mids$[mid_init$_ade591b45ac2a10b] = env->getMethodID(cls, "<init>", "(ZD)V");
                mids$[mid_findHullVertices_5c0bbab57d449f37] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MonotoneChain::MonotoneChain() : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            MonotoneChain::MonotoneChain(jboolean a0) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

            MonotoneChain::MonotoneChain(jboolean a0, jdouble a1) : ::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D(env->newObject(initializeClass, &mids$, mid_init$_ade591b45ac2a10b, a0, a1)) {}

            ::java::util::Collection MonotoneChain::findHullVertices(const ::java::util::Collection & a0) const
            {
              return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_findHullVertices_5c0bbab57d449f37], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg);

            static PyMethodDef t_MonotoneChain__methods_[] = {
              DECLARE_METHOD(t_MonotoneChain, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MonotoneChain, findHullVertices, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MonotoneChain)[] = {
              { Py_tp_methods, t_MonotoneChain__methods_ },
              { Py_tp_init, (void *) t_MonotoneChain_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MonotoneChain)[] = {
              &PY_TYPE_DEF(::org::hipparchus::geometry::euclidean::twod::hull::AbstractConvexHullGenerator2D),
              NULL
            };

            DEFINE_TYPE(MonotoneChain, t_MonotoneChain, MonotoneChain);

            void t_MonotoneChain::install(PyObject *module)
            {
              installType(&PY_TYPE(MonotoneChain), &PY_TYPE_DEF(MonotoneChain), module, "MonotoneChain", 0);
            }

            void t_MonotoneChain::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "class_", make_descriptor(MonotoneChain::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "wrapfn_", make_descriptor(t_MonotoneChain::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MonotoneChain), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MonotoneChain_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MonotoneChain::initializeClass, 1)))
                return NULL;
              return t_MonotoneChain::wrap_Object(MonotoneChain(((t_MonotoneChain *) arg)->object.this$));
            }
            static PyObject *t_MonotoneChain_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MonotoneChain::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MonotoneChain_init_(t_MonotoneChain *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  MonotoneChain object((jobject) NULL);

                  INT_CALL(object = MonotoneChain());
                  self->object = object;
                  break;
                }
               case 1:
                {
                  jboolean a0;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "Z", &a0))
                  {
                    INT_CALL(object = MonotoneChain(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jboolean a0;
                  jdouble a1;
                  MonotoneChain object((jobject) NULL);

                  if (!parseArgs(args, "ZD", &a0, &a1))
                  {
                    INT_CALL(object = MonotoneChain(a0, a1));
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

            static PyObject *t_MonotoneChain_findHullVertices(t_MonotoneChain *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::Collection result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.findHullVertices(a0));
                return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
              }

              PyErr_SetArgsError((PyObject *) self, "findHullVertices", arg);
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
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "org/hipparchus/FieldElement.h"
#include "java/util/ConcurrentModificationException.h"
#include "java/lang/Class.h"
#include "java/util/NoSuchElementException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap$Iterator::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap$Iterator::mids$ = NULL;
      bool OpenIntToFieldHashMap$Iterator::live$ = false;

      jclass OpenIntToFieldHashMap$Iterator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap$Iterator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_advance_7ae3461a92a43152] = env->getMethodID(cls, "advance", "()V");
          mids$[mid_hasNext_e470b6d9e0d979db] = env->getMethodID(cls, "hasNext", "()Z");
          mids$[mid_key_f2f64475e4580546] = env->getMethodID(cls, "key", "()I");
          mids$[mid_value_7e89936bdf79375b] = env->getMethodID(cls, "value", "()Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void OpenIntToFieldHashMap$Iterator::advance() const
      {
        env->callVoidMethod(this$, mids$[mid_advance_7ae3461a92a43152]);
      }

      jboolean OpenIntToFieldHashMap$Iterator::hasNext() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasNext_e470b6d9e0d979db]);
      }

      jint OpenIntToFieldHashMap$Iterator::key() const
      {
        return env->callIntMethod(this$, mids$[mid_key_f2f64475e4580546]);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap$Iterator::value() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_value_7e89936bdf79375b]));
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
      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self);
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap$Iterator__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap$Iterator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap$Iterator__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, advance, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, hasNext, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, key, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap$Iterator, value, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap$Iterator)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap$Iterator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OpenIntToFieldHashMap$Iterator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap$Iterator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap$Iterator, t_OpenIntToFieldHashMap$Iterator, OpenIntToFieldHashMap$Iterator);
      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_Object(const OpenIntToFieldHashMap$Iterator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap$Iterator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap$Iterator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap$Iterator *self = (t_OpenIntToFieldHashMap$Iterator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap$Iterator::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap$Iterator), &PY_TYPE_DEF(OpenIntToFieldHashMap$Iterator), module, "OpenIntToFieldHashMap$Iterator", 0);
      }

      void t_OpenIntToFieldHashMap$Iterator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "class_", make_descriptor(OpenIntToFieldHashMap$Iterator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap$Iterator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap$Iterator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap$Iterator::wrap_Object(OpenIntToFieldHashMap$Iterator(((t_OpenIntToFieldHashMap$Iterator *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap$Iterator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_of_(t_OpenIntToFieldHashMap$Iterator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_advance(t_OpenIntToFieldHashMap$Iterator *self)
      {
        OBJ_CALL(self->object.advance());
        Py_RETURN_NONE;
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_hasNext(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasNext());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_key(t_OpenIntToFieldHashMap$Iterator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.key());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_OpenIntToFieldHashMap$Iterator_value(t_OpenIntToFieldHashMap$Iterator *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.value());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }
      static PyObject *t_OpenIntToFieldHashMap$Iterator_get__parameters_(t_OpenIntToFieldHashMap$Iterator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *PolynomialFunction$Parametric::class$ = NULL;
        jmethodID *PolynomialFunction$Parametric::mids$ = NULL;
        bool PolynomialFunction$Parametric::live$ = false;

        jclass PolynomialFunction$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/PolynomialFunction$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_7b8ea6f669f90156] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_618a40a0b95154fa] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialFunction$Parametric::PolynomialFunction$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        JArray< jdouble > PolynomialFunction$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_7b8ea6f669f90156], a0, a1.this$));
        }

        jdouble PolynomialFunction$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_618a40a0b95154fa], a0, a1.this$);
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
      namespace polynomials {
        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args);
        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args);

        static PyMethodDef t_PolynomialFunction$Parametric__methods_[] = {
          DECLARE_METHOD(t_PolynomialFunction$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialFunction$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialFunction$Parametric)[] = {
          { Py_tp_methods, t_PolynomialFunction$Parametric__methods_ },
          { Py_tp_init, (void *) t_PolynomialFunction$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialFunction$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialFunction$Parametric, t_PolynomialFunction$Parametric, PolynomialFunction$Parametric);

        void t_PolynomialFunction$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialFunction$Parametric), &PY_TYPE_DEF(PolynomialFunction$Parametric), module, "PolynomialFunction$Parametric", 0);
        }

        void t_PolynomialFunction$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "class_", make_descriptor(PolynomialFunction$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "wrapfn_", make_descriptor(t_PolynomialFunction$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunction$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialFunction$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialFunction$Parametric::initializeClass, 1)))
            return NULL;
          return t_PolynomialFunction$Parametric::wrap_Object(PolynomialFunction$Parametric(((t_PolynomialFunction$Parametric *) arg)->object.this$));
        }
        static PyObject *t_PolynomialFunction$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialFunction$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialFunction$Parametric_init_(t_PolynomialFunction$Parametric *self, PyObject *args, PyObject *kwds)
        {
          PolynomialFunction$Parametric object((jobject) NULL);

          INT_CALL(object = PolynomialFunction$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_PolynomialFunction$Parametric_gradient(t_PolynomialFunction$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_PolynomialFunction$Parametric_value(t_PolynomialFunction$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *CommonGnssData::class$ = NULL;
            jmethodID *CommonGnssData::mids$ = NULL;
            bool CommonGnssData::live$ = false;

            jclass CommonGnssData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/CommonGnssData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
                mids$[mid_getAf0_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf0", "()D");
                mids$[mid_getAf1_456d9a2f64d6b28d] = env->getMethodID(cls, "getAf1", "()D");
                mids$[mid_getAngularVelocity_456d9a2f64d6b28d] = env->getMethodID(cls, "getAngularVelocity", "()D");
                mids$[mid_getCycleDuration_456d9a2f64d6b28d] = env->getMethodID(cls, "getCycleDuration", "()D");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getE_456d9a2f64d6b28d] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getI0_456d9a2f64d6b28d] = env->getMethodID(cls, "getI0", "()D");
                mids$[mid_getM0_456d9a2f64d6b28d] = env->getMethodID(cls, "getM0", "()D");
                mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getOmega0_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmega0", "()D");
                mids$[mid_getOmegaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmegaDot", "()D");
                mids$[mid_getPRN_f2f64475e4580546] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getPa_456d9a2f64d6b28d] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getSma_456d9a2f64d6b28d] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getWeek_f2f64475e4580546] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAf0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAf0", "(D)V");
                mids$[mid_setAf1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAf1", "(D)V");
                mids$[mid_setDate_e82d68cd9f886886] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setE_77e0f9a1f260e2e5] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setI0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setI0", "(D)V");
                mids$[mid_setM0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setM0", "(D)V");
                mids$[mid_setOmega0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOmega0", "(D)V");
                mids$[mid_setOmegaDot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOmegaDot", "(D)V");
                mids$[mid_setPRN_0a2a1ac2721c0336] = env->getMethodID(cls, "setPRN", "(I)V");
                mids$[mid_setPa_77e0f9a1f260e2e5] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setSma_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSma", "(D)V");
                mids$[mid_setTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setWeek_0a2a1ac2721c0336] = env->getMethodID(cls, "setWeek", "(I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonGnssData::CommonGnssData(jdouble a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

            jdouble CommonGnssData::getAf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf0_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getAf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAf1_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getAngularVelocity() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAngularVelocity_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getCycleDuration() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCycleDuration_456d9a2f64d6b28d]);
            }

            ::org::orekit::time::AbsoluteDate CommonGnssData::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jdouble CommonGnssData::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getI0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI0_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getM0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM0_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getOmega0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmega0_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getOmegaDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_456d9a2f64d6b28d]);
            }

            jint CommonGnssData::getPRN() const
            {
              return env->callIntMethod(this$, mids$[mid_getPRN_f2f64475e4580546]);
            }

            jdouble CommonGnssData::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_456d9a2f64d6b28d]);
            }

            jdouble CommonGnssData::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jint CommonGnssData::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_f2f64475e4580546]);
            }

            void CommonGnssData::setAf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf0_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setAf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAf1_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDate_e82d68cd9f886886], a0.this$);
            }

            void CommonGnssData::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setI0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI0_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setM0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setM0_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setOmega0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmega0_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setOmegaDot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setOmegaDot_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setPRN(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPRN_0a2a1ac2721c0336], a0);
            }

            void CommonGnssData::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setSma(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSma_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_77e0f9a1f260e2e5], a0);
            }

            void CommonGnssData::setWeek(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setWeek_0a2a1ac2721c0336], a0);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self);
            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg);
            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data);
            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data);
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data);
            static PyGetSetDef t_CommonGnssData__fields_[] = {
              DECLARE_GETSET_FIELD(t_CommonGnssData, af0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, af1),
              DECLARE_GET_FIELD(t_CommonGnssData, angularVelocity),
              DECLARE_GET_FIELD(t_CommonGnssData, cycleDuration),
              DECLARE_GETSET_FIELD(t_CommonGnssData, date),
              DECLARE_GETSET_FIELD(t_CommonGnssData, e),
              DECLARE_GETSET_FIELD(t_CommonGnssData, i0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, m0),
              DECLARE_GET_FIELD(t_CommonGnssData, mu),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omega0),
              DECLARE_GETSET_FIELD(t_CommonGnssData, omegaDot),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pRN),
              DECLARE_GETSET_FIELD(t_CommonGnssData, pa),
              DECLARE_GETSET_FIELD(t_CommonGnssData, sma),
              DECLARE_GETSET_FIELD(t_CommonGnssData, time),
              DECLARE_GETSET_FIELD(t_CommonGnssData, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CommonGnssData__methods_[] = {
              DECLARE_METHOD(t_CommonGnssData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonGnssData, getAf0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAf1, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getAngularVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getCycleDuration, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getDate, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getE, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getI0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getM0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getMu, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmega0, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getOmegaDot, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPRN, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getPa, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getSma, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getTime, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_CommonGnssData, setAf0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setAf1, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setDate, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setE, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setI0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setM0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmega0, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setOmegaDot, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPRN, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setPa, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setSma, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setTime, METH_O),
              DECLARE_METHOD(t_CommonGnssData, setWeek, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonGnssData)[] = {
              { Py_tp_methods, t_CommonGnssData__methods_ },
              { Py_tp_init, (void *) t_CommonGnssData_init_ },
              { Py_tp_getset, t_CommonGnssData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonGnssData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CommonGnssData, t_CommonGnssData, CommonGnssData);

            void t_CommonGnssData::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonGnssData), &PY_TYPE_DEF(CommonGnssData), module, "CommonGnssData", 0);
            }

            void t_CommonGnssData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "class_", make_descriptor(CommonGnssData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "wrapfn_", make_descriptor(t_CommonGnssData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonGnssData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonGnssData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonGnssData::initializeClass, 1)))
                return NULL;
              return t_CommonGnssData::wrap_Object(CommonGnssData(((t_CommonGnssData *) arg)->object.this$));
            }
            static PyObject *t_CommonGnssData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonGnssData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonGnssData_init_(t_CommonGnssData *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              CommonGnssData object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = CommonGnssData(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CommonGnssData_getAf0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAf1(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getAngularVelocity(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getCycleDuration(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getDate(t_CommonGnssData *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CommonGnssData_getE(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getI0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getM0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getMu(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmega0(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmega0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getOmegaDot(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getPRN(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPRN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_getPa(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getSma(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getTime(t_CommonGnssData *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CommonGnssData_getWeek(t_CommonGnssData *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CommonGnssData_setAf0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setAf1(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAf1", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setDate(t_CommonGnssData *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDate", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setE(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setI0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setM0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setM0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setM0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmega0(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmega0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmega0", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setOmegaDot(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setOmegaDot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setOmegaDot", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPRN(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setPRN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPRN", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setPa(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setSma(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSma(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSma", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setTime(t_CommonGnssData *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_setWeek(t_CommonGnssData *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setWeek(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setWeek", arg);
              return NULL;
            }

            static PyObject *t_CommonGnssData_get__af0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__af1(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__af1(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "af1", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__angularVelocity(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAngularVelocity());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__cycleDuration(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCycleDuration());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__date(t_CommonGnssData *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CommonGnssData_set__date(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "date", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__e(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__e(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__i0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__i0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__m0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__m0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setM0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "m0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__mu(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CommonGnssData_get__omega0(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmega0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omega0(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmega0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omega0", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__omegaDot(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOmegaDot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__omegaDot(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setOmegaDot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "omegaDot", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pRN(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPRN());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__pRN(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setPRN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pRN", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__pa(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__pa(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__sma(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__sma(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSma(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sma", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__time(t_CommonGnssData *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CommonGnssData_set__time(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_CommonGnssData_get__week(t_CommonGnssData *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
            static int t_CommonGnssData_set__week(t_CommonGnssData *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setWeek(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "week", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCBScale::class$ = NULL;
      jmethodID *TCBScale::mids$ = NULL;
      bool TCBScale::live$ = false;

      jclass TCBScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCBScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCBScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble TCBScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCBScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String TCBScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCBScale_getName(t_TCBScale *self);
      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args);
      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data);
      static PyGetSetDef t_TCBScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCBScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCBScale__methods_[] = {
        DECLARE_METHOD(t_TCBScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCBScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCBScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCBScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCBScale)[] = {
        { Py_tp_methods, t_TCBScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCBScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCBScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCBScale, t_TCBScale, TCBScale);

      void t_TCBScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCBScale), &PY_TYPE_DEF(TCBScale), module, "TCBScale", 0);
      }

      void t_TCBScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "class_", make_descriptor(TCBScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "wrapfn_", make_descriptor(t_TCBScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCBScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCBScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCBScale::initializeClass, 1)))
          return NULL;
        return t_TCBScale::wrap_Object(TCBScale(((t_TCBScale *) arg)->object.this$));
      }
      static PyObject *t_TCBScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCBScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCBScale_getName(t_TCBScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCBScale_offsetFromTAI(t_TCBScale *self, PyObject *args)
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

      static PyObject *t_TCBScale_toString(t_TCBScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCBScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCBScale_get__name(t_TCBScale *self, void *data)
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
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "java/lang/Integer.h"
#include "org/orekit/files/rinex/observation/PhaseShiftCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationHeader::class$ = NULL;
          jmethodID *RinexObservationHeader::mids$ = NULL;
          bool RinexObservationHeader::live$ = false;

          jclass RinexObservationHeader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationHeader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addAppliedDCBS_ff0e7309079f40cf] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_53fc7a51ceba7c31] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addGlonassChannel_70e9e40c5d576285] = env->getMethodID(cls, "addGlonassChannel", "(Lorg/orekit/files/rinex/observation/GlonassSatelliteChannel;)V");
              mids$[mid_addPhaseShiftCorrection_9cf1aa1004e8e5bd] = env->getMethodID(cls, "addPhaseShiftCorrection", "(Lorg/orekit/files/rinex/observation/PhaseShiftCorrection;)V");
              mids$[mid_addScaleFactorCorrection_a1d4795e2dd1188b] = env->getMethodID(cls, "addScaleFactorCorrection", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/rinex/observation/ScaleFactorCorrection;)V");
              mids$[mid_getAgencyName_0090f7797e403f43] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAntennaAzimuth_456d9a2f64d6b28d] = env->getMethodID(cls, "getAntennaAzimuth", "()D");
              mids$[mid_getAntennaBSight_17a952530a808943] = env->getMethodID(cls, "getAntennaBSight", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaHeight_456d9a2f64d6b28d] = env->getMethodID(cls, "getAntennaHeight", "()D");
              mids$[mid_getAntennaNumber_0090f7797e403f43] = env->getMethodID(cls, "getAntennaNumber", "()Ljava/lang/String;");
              mids$[mid_getAntennaPhaseCenter_17a952530a808943] = env->getMethodID(cls, "getAntennaPhaseCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaReferencePoint_17a952530a808943] = env->getMethodID(cls, "getAntennaReferencePoint", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAntennaType_0090f7797e403f43] = env->getMethodID(cls, "getAntennaType", "()Ljava/lang/String;");
              mids$[mid_getAntennaZeroDirection_17a952530a808943] = env->getMethodID(cls, "getAntennaZeroDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getApproxPos_17a952530a808943] = env->getMethodID(cls, "getApproxPos", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getC1cCodePhaseBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getC1cCodePhaseBias", "()D");
              mids$[mid_getC1pCodePhaseBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getC1pCodePhaseBias", "()D");
              mids$[mid_getC2cCodePhaseBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getC2cCodePhaseBias", "()D");
              mids$[mid_getC2pCodePhaseBias_456d9a2f64d6b28d] = env->getMethodID(cls, "getC2pCodePhaseBias", "()D");
              mids$[mid_getCenterMass_17a952530a808943] = env->getMethodID(cls, "getCenterMass", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getClkOffset_f2f64475e4580546] = env->getMethodID(cls, "getClkOffset", "()I");
              mids$[mid_getEccentricities_6d781af269bebe5e] = env->getMethodID(cls, "getEccentricities", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getGlonassChannels_a6156df500549a58] = env->getMethodID(cls, "getGlonassChannels", "()Ljava/util/List;");
              mids$[mid_getInterval_456d9a2f64d6b28d] = env->getMethodID(cls, "getInterval", "()D");
              mids$[mid_getLeapSeconds_f2f64475e4580546] = env->getMethodID(cls, "getLeapSeconds", "()I");
              mids$[mid_getLeapSecondsDayNum_f2f64475e4580546] = env->getMethodID(cls, "getLeapSecondsDayNum", "()I");
              mids$[mid_getLeapSecondsFuture_f2f64475e4580546] = env->getMethodID(cls, "getLeapSecondsFuture", "()I");
              mids$[mid_getLeapSecondsWeekNum_f2f64475e4580546] = env->getMethodID(cls, "getLeapSecondsWeekNum", "()I");
              mids$[mid_getListAppliedDCBS_a6156df500549a58] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_a6156df500549a58] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getMarkerName_0090f7797e403f43] = env->getMethodID(cls, "getMarkerName", "()Ljava/lang/String;");
              mids$[mid_getMarkerNumber_0090f7797e403f43] = env->getMethodID(cls, "getMarkerNumber", "()Ljava/lang/String;");
              mids$[mid_getMarkerType_0090f7797e403f43] = env->getMethodID(cls, "getMarkerType", "()Ljava/lang/String;");
              mids$[mid_getNbObsPerSat_d6753b7055940a54] = env->getMethodID(cls, "getNbObsPerSat", "()Ljava/util/Map;");
              mids$[mid_getNbSat_f2f64475e4580546] = env->getMethodID(cls, "getNbSat", "()I");
              mids$[mid_getObservationCode_0090f7797e403f43] = env->getMethodID(cls, "getObservationCode", "()Ljava/lang/String;");
              mids$[mid_getObserverName_0090f7797e403f43] = env->getMethodID(cls, "getObserverName", "()Ljava/lang/String;");
              mids$[mid_getPhaseCenterSystem_1b72fcc8f550bfc7] = env->getMethodID(cls, "getPhaseCenterSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getPhaseShiftCorrections_a6156df500549a58] = env->getMethodID(cls, "getPhaseShiftCorrections", "()Ljava/util/List;");
              mids$[mid_getReceiverNumber_0090f7797e403f43] = env->getMethodID(cls, "getReceiverNumber", "()Ljava/lang/String;");
              mids$[mid_getReceiverType_0090f7797e403f43] = env->getMethodID(cls, "getReceiverType", "()Ljava/lang/String;");
              mids$[mid_getReceiverVersion_0090f7797e403f43] = env->getMethodID(cls, "getReceiverVersion", "()Ljava/lang/String;");
              mids$[mid_getScaleFactorCorrections_31d4a1bf5da85458] = env->getMethodID(cls, "getScaleFactorCorrections", "(Lorg/orekit/gnss/SatelliteSystem;)Ljava/util/List;");
              mids$[mid_getSignalStrengthUnit_0090f7797e403f43] = env->getMethodID(cls, "getSignalStrengthUnit", "()Ljava/lang/String;");
              mids$[mid_getTFirstObs_aaa854c403487cf3] = env->getMethodID(cls, "getTFirstObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTLastObs_aaa854c403487cf3] = env->getMethodID(cls, "getTLastObs", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTypeObs_d6753b7055940a54] = env->getMethodID(cls, "getTypeObs", "()Ljava/util/Map;");
              mids$[mid_setAgencyName_e939c6558ae8d313] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaAzimuth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAntennaAzimuth", "(D)V");
              mids$[mid_setAntennaBSight_a94622407b723689] = env->getMethodID(cls, "setAntennaBSight", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaHeight_77e0f9a1f260e2e5] = env->getMethodID(cls, "setAntennaHeight", "(D)V");
              mids$[mid_setAntennaNumber_e939c6558ae8d313] = env->getMethodID(cls, "setAntennaNumber", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaPhaseCenter_a94622407b723689] = env->getMethodID(cls, "setAntennaPhaseCenter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaReferencePoint_a94622407b723689] = env->getMethodID(cls, "setAntennaReferencePoint", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setAntennaType_e939c6558ae8d313] = env->getMethodID(cls, "setAntennaType", "(Ljava/lang/String;)V");
              mids$[mid_setAntennaZeroDirection_a94622407b723689] = env->getMethodID(cls, "setAntennaZeroDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setApproxPos_a94622407b723689] = env->getMethodID(cls, "setApproxPos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setC1cCodePhaseBias_77e0f9a1f260e2e5] = env->getMethodID(cls, "setC1cCodePhaseBias", "(D)V");
              mids$[mid_setC1pCodePhaseBias_77e0f9a1f260e2e5] = env->getMethodID(cls, "setC1pCodePhaseBias", "(D)V");
              mids$[mid_setC2cCodePhaseBias_77e0f9a1f260e2e5] = env->getMethodID(cls, "setC2cCodePhaseBias", "(D)V");
              mids$[mid_setC2pCodePhaseBias_77e0f9a1f260e2e5] = env->getMethodID(cls, "setC2pCodePhaseBias", "(D)V");
              mids$[mid_setCenterMass_a94622407b723689] = env->getMethodID(cls, "setCenterMass", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_setClkOffset_0a2a1ac2721c0336] = env->getMethodID(cls, "setClkOffset", "(I)V");
              mids$[mid_setEccentricities_6b877e75654b72f2] = env->getMethodID(cls, "setEccentricities", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_setInterval_77e0f9a1f260e2e5] = env->getMethodID(cls, "setInterval", "(D)V");
              mids$[mid_setLeapSeconds_0a2a1ac2721c0336] = env->getMethodID(cls, "setLeapSeconds", "(I)V");
              mids$[mid_setLeapSecondsDayNum_0a2a1ac2721c0336] = env->getMethodID(cls, "setLeapSecondsDayNum", "(I)V");
              mids$[mid_setLeapSecondsFuture_0a2a1ac2721c0336] = env->getMethodID(cls, "setLeapSecondsFuture", "(I)V");
              mids$[mid_setLeapSecondsWeekNum_0a2a1ac2721c0336] = env->getMethodID(cls, "setLeapSecondsWeekNum", "(I)V");
              mids$[mid_setMarkerName_e939c6558ae8d313] = env->getMethodID(cls, "setMarkerName", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerNumber_e939c6558ae8d313] = env->getMethodID(cls, "setMarkerNumber", "(Ljava/lang/String;)V");
              mids$[mid_setMarkerType_e939c6558ae8d313] = env->getMethodID(cls, "setMarkerType", "(Ljava/lang/String;)V");
              mids$[mid_setNbObsPerSatellite_a41e1305960ee8b3] = env->getMethodID(cls, "setNbObsPerSatellite", "(Lorg/orekit/gnss/SatInSystem;Lorg/orekit/gnss/ObservationType;I)V");
              mids$[mid_setNbSat_0a2a1ac2721c0336] = env->getMethodID(cls, "setNbSat", "(I)V");
              mids$[mid_setObservationCode_e939c6558ae8d313] = env->getMethodID(cls, "setObservationCode", "(Ljava/lang/String;)V");
              mids$[mid_setObserverName_e939c6558ae8d313] = env->getMethodID(cls, "setObserverName", "(Ljava/lang/String;)V");
              mids$[mid_setPhaseCenterSystem_a9204a81fe55aebe] = env->getMethodID(cls, "setPhaseCenterSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setReceiverNumber_e939c6558ae8d313] = env->getMethodID(cls, "setReceiverNumber", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverType_e939c6558ae8d313] = env->getMethodID(cls, "setReceiverType", "(Ljava/lang/String;)V");
              mids$[mid_setReceiverVersion_e939c6558ae8d313] = env->getMethodID(cls, "setReceiverVersion", "(Ljava/lang/String;)V");
              mids$[mid_setSignalStrengthUnit_e939c6558ae8d313] = env->getMethodID(cls, "setSignalStrengthUnit", "(Ljava/lang/String;)V");
              mids$[mid_setTFirstObs_e82d68cd9f886886] = env->getMethodID(cls, "setTFirstObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTLastObs_e82d68cd9f886886] = env->getMethodID(cls, "setTLastObs", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setTypeObs_e302854832599b59] = env->getMethodID(cls, "setTypeObs", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationHeader::RinexObservationHeader() : ::org::orekit::files::rinex::section::RinexBaseHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void RinexObservationHeader::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_ff0e7309079f40cf], a0.this$);
          }

          void RinexObservationHeader::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_53fc7a51ceba7c31], a0.this$);
          }

          void RinexObservationHeader::addGlonassChannel(const ::org::orekit::files::rinex::observation::GlonassSatelliteChannel & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassChannel_70e9e40c5d576285], a0.this$);
          }

          void RinexObservationHeader::addPhaseShiftCorrection(const ::org::orekit::files::rinex::observation::PhaseShiftCorrection & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addPhaseShiftCorrection_9cf1aa1004e8e5bd], a0.this$);
          }

          void RinexObservationHeader::addScaleFactorCorrection(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::rinex::observation::ScaleFactorCorrection & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addScaleFactorCorrection_a1d4795e2dd1188b], a0.this$, a1.this$);
          }

          ::java::lang::String RinexObservationHeader::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_0090f7797e403f43]));
          }

          jdouble RinexObservationHeader::getAntennaAzimuth() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaAzimuth_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaBSight() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaBSight_17a952530a808943]));
          }

          jdouble RinexObservationHeader::getAntennaHeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAntennaHeight_456d9a2f64d6b28d]);
          }

          ::java::lang::String RinexObservationHeader::getAntennaNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaNumber_0090f7797e403f43]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaPhaseCenter() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaPhaseCenter_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaReferencePoint() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaReferencePoint_17a952530a808943]));
          }

          ::java::lang::String RinexObservationHeader::getAntennaType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_0090f7797e403f43]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getAntennaZeroDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAntennaZeroDirection_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getApproxPos() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getApproxPos_17a952530a808943]));
          }

          jdouble RinexObservationHeader::getC1cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1cCodePhaseBias_456d9a2f64d6b28d]);
          }

          jdouble RinexObservationHeader::getC1pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC1pCodePhaseBias_456d9a2f64d6b28d]);
          }

          jdouble RinexObservationHeader::getC2cCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2cCodePhaseBias_456d9a2f64d6b28d]);
          }

          jdouble RinexObservationHeader::getC2pCodePhaseBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getC2pCodePhaseBias_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D RinexObservationHeader::getCenterMass() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterMass_17a952530a808943]));
          }

          jint RinexObservationHeader::getClkOffset() const
          {
            return env->callIntMethod(this$, mids$[mid_getClkOffset_f2f64475e4580546]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D RinexObservationHeader::getEccentricities() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getEccentricities_6d781af269bebe5e]));
          }

          ::java::util::List RinexObservationHeader::getGlonassChannels() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassChannels_a6156df500549a58]));
          }

          jdouble RinexObservationHeader::getInterval() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInterval_456d9a2f64d6b28d]);
          }

          jint RinexObservationHeader::getLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSeconds_f2f64475e4580546]);
          }

          jint RinexObservationHeader::getLeapSecondsDayNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsDayNum_f2f64475e4580546]);
          }

          jint RinexObservationHeader::getLeapSecondsFuture() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsFuture_f2f64475e4580546]);
          }

          jint RinexObservationHeader::getLeapSecondsWeekNum() const
          {
            return env->callIntMethod(this$, mids$[mid_getLeapSecondsWeekNum_f2f64475e4580546]);
          }

          ::java::util::List RinexObservationHeader::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_a6156df500549a58]));
          }

          ::java::util::List RinexObservationHeader::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_a6156df500549a58]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerName_0090f7797e403f43]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerNumber_0090f7797e403f43]));
          }

          ::java::lang::String RinexObservationHeader::getMarkerType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMarkerType_0090f7797e403f43]));
          }

          ::java::util::Map RinexObservationHeader::getNbObsPerSat() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getNbObsPerSat_d6753b7055940a54]));
          }

          jint RinexObservationHeader::getNbSat() const
          {
            return env->callIntMethod(this$, mids$[mid_getNbSat_f2f64475e4580546]);
          }

          ::java::lang::String RinexObservationHeader::getObservationCode() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObservationCode_0090f7797e403f43]));
          }

          ::java::lang::String RinexObservationHeader::getObserverName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getObserverName_0090f7797e403f43]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexObservationHeader::getPhaseCenterSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getPhaseCenterSystem_1b72fcc8f550bfc7]));
          }

          ::java::util::List RinexObservationHeader::getPhaseShiftCorrections() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPhaseShiftCorrections_a6156df500549a58]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverNumber() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverNumber_0090f7797e403f43]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverType_0090f7797e403f43]));
          }

          ::java::lang::String RinexObservationHeader::getReceiverVersion() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverVersion_0090f7797e403f43]));
          }

          ::java::util::List RinexObservationHeader::getScaleFactorCorrections(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getScaleFactorCorrections_31d4a1bf5da85458], a0.this$));
          }

          ::java::lang::String RinexObservationHeader::getSignalStrengthUnit() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSignalStrengthUnit_0090f7797e403f43]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTFirstObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTFirstObs_aaa854c403487cf3]));
          }

          ::org::orekit::time::AbsoluteDate RinexObservationHeader::getTLastObs() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTLastObs_aaa854c403487cf3]));
          }

          ::java::util::Map RinexObservationHeader::getTypeObs() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getTypeObs_d6753b7055940a54]));
          }

          void RinexObservationHeader::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setAntennaAzimuth(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaAzimuth_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setAntennaBSight(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaBSight_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setAntennaHeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaHeight_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setAntennaNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaNumber_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setAntennaPhaseCenter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaPhaseCenter_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setAntennaReferencePoint(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaReferencePoint_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setAntennaType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaType_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setAntennaZeroDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAntennaZeroDirection_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setApproxPos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setApproxPos_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setC1cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1cCodePhaseBias_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setC1pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC1pCodePhaseBias_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setC2cCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2cCodePhaseBias_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setC2pCodePhaseBias(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setC2pCodePhaseBias_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setCenterMass(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCenterMass_a94622407b723689], a0.this$);
          }

          void RinexObservationHeader::setClkOffset(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClkOffset_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setEccentricities(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setEccentricities_6b877e75654b72f2], a0.this$);
          }

          void RinexObservationHeader::setInterval(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setInterval_77e0f9a1f260e2e5], a0);
          }

          void RinexObservationHeader::setLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSeconds_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setLeapSecondsDayNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsDayNum_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setLeapSecondsFuture(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsFuture_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setLeapSecondsWeekNum(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLeapSecondsWeekNum_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setMarkerName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerName_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setMarkerNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerNumber_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setMarkerType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMarkerType_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setNbObsPerSatellite(const ::org::orekit::gnss::SatInSystem & a0, const ::org::orekit::gnss::ObservationType & a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbObsPerSatellite_a41e1305960ee8b3], a0.this$, a1.this$, a2);
          }

          void RinexObservationHeader::setNbSat(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNbSat_0a2a1ac2721c0336], a0);
          }

          void RinexObservationHeader::setObservationCode(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObservationCode_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setObserverName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setObserverName_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setPhaseCenterSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setPhaseCenterSystem_a9204a81fe55aebe], a0.this$);
          }

          void RinexObservationHeader::setReceiverNumber(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverNumber_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setReceiverType(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverType_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setReceiverVersion(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReceiverVersion_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setSignalStrengthUnit(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSignalStrengthUnit_e939c6558ae8d313], a0.this$);
          }

          void RinexObservationHeader::setTFirstObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTFirstObs_e82d68cd9f886886], a0.this$);
          }

          void RinexObservationHeader::setTLastObs(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTLastObs_e82d68cd9f886886], a0.this$);
          }

          void RinexObservationHeader::setTypeObs(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::util::List & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setTypeObs_e302854832599b59], a0.this$, a1.this$);
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
        namespace observation {
          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self);
          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg);
          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args);
          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data);
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data);
          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data);
          static PyGetSetDef t_RinexObservationHeader__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, agencyName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaAzimuth),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaBSight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaHeight),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaPhaseCenter),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaReferencePoint),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, antennaZeroDirection),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, approxPos),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c1pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2cCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, c2pCodePhaseBias),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, centerMass),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, clkOffset),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, eccentricities),
            DECLARE_GET_FIELD(t_RinexObservationHeader, glonassChannels),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, interval),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSeconds),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsDayNum),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsFuture),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, leapSecondsWeekNum),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexObservationHeader, listAppliedPCVS),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, markerType),
            DECLARE_GET_FIELD(t_RinexObservationHeader, nbObsPerSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, nbSat),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observationCode),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, observerName),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, phaseCenterSystem),
            DECLARE_GET_FIELD(t_RinexObservationHeader, phaseShiftCorrections),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverNumber),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverType),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, receiverVersion),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, signalStrengthUnit),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tFirstObs),
            DECLARE_GETSET_FIELD(t_RinexObservationHeader, tLastObs),
            DECLARE_GET_FIELD(t_RinexObservationHeader, typeObs),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservationHeader__methods_[] = {
            DECLARE_METHOD(t_RinexObservationHeader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addGlonassChannel, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addPhaseShiftCorrection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, addScaleFactorCorrection, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaAzimuth, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaBSight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaHeight, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaPhaseCenter, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaReferencePoint, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getAntennaZeroDirection, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getApproxPos, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC1pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2cCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getC2pCodePhaseBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getCenterMass, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getClkOffset, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getEccentricities, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getGlonassChannels, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getInterval, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsDayNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsFuture, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getLeapSecondsWeekNum, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getMarkerType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbObsPerSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getNbSat, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObservationCode, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getObserverName, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseCenterSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getPhaseShiftCorrections, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverType, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getReceiverVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getScaleFactorCorrections, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, getSignalStrengthUnit, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTFirstObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTLastObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, getTypeObs, METH_NOARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaAzimuth, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaBSight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaHeight, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaPhaseCenter, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaReferencePoint, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setAntennaZeroDirection, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setApproxPos, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC1pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2cCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setC2pCodePhaseBias, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setCenterMass, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setClkOffset, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setEccentricities, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setInterval, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsDayNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsFuture, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setLeapSecondsWeekNum, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setMarkerType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setNbObsPerSatellite, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservationHeader, setNbSat, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObservationCode, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setObserverName, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setPhaseCenterSystem, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverNumber, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverType, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setReceiverVersion, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setSignalStrengthUnit, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTFirstObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTLastObs, METH_O),
            DECLARE_METHOD(t_RinexObservationHeader, setTypeObs, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationHeader)[] = {
            { Py_tp_methods, t_RinexObservationHeader__methods_ },
            { Py_tp_init, (void *) t_RinexObservationHeader_init_ },
            { Py_tp_getset, t_RinexObservationHeader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationHeader)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::section::RinexBaseHeader),
            NULL
          };

          DEFINE_TYPE(RinexObservationHeader, t_RinexObservationHeader, RinexObservationHeader);

          void t_RinexObservationHeader::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationHeader), &PY_TYPE_DEF(RinexObservationHeader), module, "RinexObservationHeader", 0);
          }

          void t_RinexObservationHeader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "class_", make_descriptor(RinexObservationHeader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "wrapfn_", make_descriptor(t_RinexObservationHeader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationHeader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservationHeader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationHeader::initializeClass, 1)))
              return NULL;
            return t_RinexObservationHeader::wrap_Object(RinexObservationHeader(((t_RinexObservationHeader *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationHeader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationHeader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationHeader_init_(t_RinexObservationHeader *self, PyObject *args, PyObject *kwds)
          {
            RinexObservationHeader object((jobject) NULL);

            INT_CALL(object = RinexObservationHeader());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexObservationHeader_addAppliedDCBS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addAppliedPCVS(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addGlonassChannel(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::GlonassSatelliteChannel a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::GlonassSatelliteChannel::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassChannel(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassChannel", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addPhaseShiftCorrection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::PhaseShiftCorrection a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::PhaseShiftCorrection::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addPhaseShiftCorrection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addPhaseShiftCorrection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_addScaleFactorCorrection(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::files::rinex::observation::ScaleFactorCorrection a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::rinex::observation::ScaleFactorCorrection::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
            {
              OBJ_CALL(self->object.addScaleFactorCorrection(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScaleFactorCorrection", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getAgencyName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaAzimuth(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaBSight(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaHeight(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaPhaseCenter(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaReferencePoint(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getAntennaZeroDirection(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getApproxPos(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getC1cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC1pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2cCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getC2pCodePhaseBias(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getCenterMass(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getClkOffset(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getClkOffset());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getEccentricities(t_RinexObservationHeader *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getGlonassChannels(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(GlonassSatelliteChannel));
          }

          static PyObject *t_RinexObservationHeader_getInterval(t_RinexObservationHeader *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInterval());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSeconds(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsDayNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsFuture(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getLeapSecondsWeekNum(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getListAppliedDCBS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexObservationHeader_getListAppliedPCVS(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexObservationHeader_getMarkerName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getMarkerType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getMarkerType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getNbObsPerSat(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getNbSat(t_RinexObservationHeader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNbSat());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexObservationHeader_getObservationCode(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationCode());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getObserverName(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getObserverName());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseCenterSystem(t_RinexObservationHeader *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getPhaseShiftCorrections(t_RinexObservationHeader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(PhaseShiftCorrection));
          }

          static PyObject *t_RinexObservationHeader_getReceiverNumber(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverNumber());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverType(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverType());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getReceiverVersion(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverVersion());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getScaleFactorCorrections(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.getScaleFactorCorrections(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ScaleFactorCorrection));
            }

            PyErr_SetArgsError((PyObject *) self, "getScaleFactorCorrections", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_getSignalStrengthUnit(t_RinexObservationHeader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSignalStrengthUnit());
            return j2p(result);
          }

          static PyObject *t_RinexObservationHeader_getTFirstObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTLastObs(t_RinexObservationHeader *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_getTypeObs(t_RinexObservationHeader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexObservationHeader_setAgencyName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaAzimuth(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaAzimuth(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaAzimuth", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaBSight(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaBSight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaBSight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaHeight(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAntennaHeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaHeight", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaPhaseCenter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaPhaseCenter", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaReferencePoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaReferencePoint", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAntennaType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setAntennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setAntennaZeroDirection(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAntennaZeroDirection", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setApproxPos(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setApproxPos(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setApproxPos", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC1pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC1pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2cCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2cCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setC2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setC2pCodePhaseBias(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setC2pCodePhaseBias", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setCenterMass(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCenterMass(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCenterMass", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setClkOffset(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setClkOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClkOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setEccentricities(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setEccentricities(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setEccentricities", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setInterval(t_RinexObservationHeader *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setInterval(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setInterval", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSeconds(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsDayNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsDayNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsFuture(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsFuture", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setLeapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setLeapSecondsWeekNum(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLeapSecondsWeekNum", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setMarkerType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setMarkerType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMarkerType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbObsPerSatellite(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;

            if (!parseArgs(args, "kKI", ::org::orekit::gnss::SatInSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
            {
              OBJ_CALL(self->object.setNbObsPerSatellite(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbObsPerSatellite", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setNbSat(t_RinexObservationHeader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNbSat(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNbSat", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObservationCode(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObservationCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObservationCode", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setObserverName(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setObserverName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setObserverName", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setPhaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setPhaseCenterSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setPhaseCenterSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverNumber(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverNumber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverNumber", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverType(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverType", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setReceiverVersion(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setReceiverVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReceiverVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setSignalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setSignalStrengthUnit(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSignalStrengthUnit", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTFirstObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTFirstObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTFirstObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTLastObs(t_RinexObservationHeader *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTLastObs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTLastObs", arg);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_setTypeObs(t_RinexObservationHeader *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setTypeObs(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTypeObs", args);
            return NULL;
          }

          static PyObject *t_RinexObservationHeader_get__agencyName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__agencyName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaAzimuth(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaAzimuth());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaAzimuth(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaAzimuth(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaAzimuth", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaBSight(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaBSight());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaBSight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaBSight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaBSight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaHeight(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAntennaHeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__antennaHeight(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAntennaHeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaHeight", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaPhaseCenter(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaPhaseCenter());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaPhaseCenter(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaPhaseCenter(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaPhaseCenter", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaReferencePoint(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaReferencePoint());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaReferencePoint(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaReferencePoint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaReferencePoint", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__antennaType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAntennaType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__antennaZeroDirection(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getAntennaZeroDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__antennaZeroDirection(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setAntennaZeroDirection(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "antennaZeroDirection", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__approxPos(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getApproxPos());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__approxPos(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setApproxPos(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "approxPos", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c1pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC1pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c1pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC1pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c1pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2cCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2cCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2cCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2cCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2cCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__c2pCodePhaseBias(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getC2pCodePhaseBias());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__c2pCodePhaseBias(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setC2pCodePhaseBias(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "c2pCodePhaseBias", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__centerMass(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getCenterMass());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__centerMass(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
              {
                INT_CALL(self->object.setCenterMass(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "centerMass", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__clkOffset(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getClkOffset());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__clkOffset(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setClkOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "clkOffset", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__eccentricities(t_RinexObservationHeader *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getEccentricities());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__eccentricities(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::hipparchus::geometry::euclidean::twod::Vector2D value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &value))
              {
                INT_CALL(self->object.setEccentricities(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "eccentricities", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__glonassChannels(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassChannels());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__interval(t_RinexObservationHeader *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInterval());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexObservationHeader_set__interval(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setInterval(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "interval", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSeconds(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSeconds(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsDayNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsDayNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsDayNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsDayNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsDayNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsFuture(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsFuture());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsFuture(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsFuture(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsFuture", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__leapSecondsWeekNum(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLeapSecondsWeekNum());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__leapSecondsWeekNum(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setLeapSecondsWeekNum(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "leapSecondsWeekNum", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedDCBS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__listAppliedPCVS(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__markerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__markerType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getMarkerType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__markerType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setMarkerType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "markerType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__nbObsPerSat(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getNbObsPerSat());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__nbSat(t_RinexObservationHeader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNbSat());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexObservationHeader_set__nbSat(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNbSat(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "nbSat", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observationCode(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationCode());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observationCode(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObservationCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observationCode", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__observerName(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getObserverName());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__observerName(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setObserverName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "observerName", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseCenterSystem(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseCenterSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__phaseCenterSystem(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setPhaseCenterSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "phaseCenterSystem", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__phaseShiftCorrections(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getPhaseShiftCorrections());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexObservationHeader_get__receiverNumber(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverNumber());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverNumber(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverNumber(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverNumber", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverType(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverType());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverType(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverType(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverType", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__receiverVersion(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverVersion());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__receiverVersion(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setReceiverVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "receiverVersion", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__signalStrengthUnit(t_RinexObservationHeader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSignalStrengthUnit());
            return j2p(value);
          }
          static int t_RinexObservationHeader_set__signalStrengthUnit(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setSignalStrengthUnit(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "signalStrengthUnit", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tFirstObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTFirstObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tFirstObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTFirstObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tFirstObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__tLastObs(t_RinexObservationHeader *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLastObs());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexObservationHeader_set__tLastObs(t_RinexObservationHeader *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTLastObs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "tLastObs", arg);
            return -1;
          }

          static PyObject *t_RinexObservationHeader_get__typeObs(t_RinexObservationHeader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypeObs());
            return ::java::util::t_Map::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmMetadataKey::class$ = NULL;
              jmethodID *OcmMetadataKey::mids$ = NULL;
              bool OcmMetadataKey::live$ = false;
              OcmMetadataKey *OcmMetadataKey::ADM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::ALTERNATE_NAMES = NULL;
              OcmMetadataKey *OcmMetadataKey::CATALOG_NAME = NULL;
              OcmMetadataKey *OcmMetadataKey::CDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::CELESTIAL_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::CONSTELLATION = NULL;
              OcmMetadataKey *OcmMetadataKey::COUNTRY = NULL;
              OcmMetadataKey *OcmMetadataKey::EOP_SOURCE = NULL;
              OcmMetadataKey *OcmMetadataKey::EPOCH_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::INTERP_METHOD_EOP = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_LEAP_TAIMUTC = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::NEXT_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_DESIGNATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OBJECT_TYPE = NULL;
              OcmMetadataKey *OcmMetadataKey::OCM_DATA_ELEMENTS = NULL;
              OcmMetadataKey *OcmMetadataKey::OPERATOR = NULL;
              OcmMetadataKey *OcmMetadataKey::OPS_STATUS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORBIT_CATEGORY = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::ORIGINATOR_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::OWNER = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
              OcmMetadataKey *OcmMetadataKey::PRM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::RDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_OFFSET_AT_EPOCH = NULL;
              OcmMetadataKey *OcmMetadataKey::SCLK_SEC_PER_SI_SEC = NULL;
              OcmMetadataKey *OcmMetadataKey::START_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::STOP_TIME = NULL;
              OcmMetadataKey *OcmMetadataKey::TAIMUTC_AT_TZERO = NULL;
              OcmMetadataKey *OcmMetadataKey::TDM_MSG_LINK = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ADDRESS = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_EMAIL = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_ORG = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_PHONE = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POC = NULL;
              OcmMetadataKey *OcmMetadataKey::TECH_POSITION = NULL;
              OcmMetadataKey *OcmMetadataKey::TIME_SPAN = NULL;
              OcmMetadataKey *OcmMetadataKey::UT1MUTC_AT_TZERO = NULL;

              jclass OcmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_d82b13bed91c5a3a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadata;)Z");
                  mids$[mid_valueOf_e7cf321c65e016d0] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");
                  mids$[mid_values_f0edd35700594a55] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ADM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ALTERNATE_NAMES = new OcmMetadataKey(env->getStaticObjectField(cls, "ALTERNATE_NAMES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CATALOG_NAME = new OcmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "CDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CELESTIAL_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "CELESTIAL_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  CONSTELLATION = new OcmMetadataKey(env->getStaticObjectField(cls, "CONSTELLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  COUNTRY = new OcmMetadataKey(env->getStaticObjectField(cls, "COUNTRY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EOP_SOURCE = new OcmMetadataKey(env->getStaticObjectField(cls, "EOP_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  EPOCH_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "EPOCH_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERNATIONAL_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  INTERP_METHOD_EOP = new OcmMetadataKey(env->getStaticObjectField(cls, "INTERP_METHOD_EOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_LEAP_TAIMUTC = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_LEAP_TAIMUTC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  NEXT_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_DESIGNATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OBJECT_TYPE = new OcmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OCM_DATA_ELEMENTS = new OcmMetadataKey(env->getStaticObjectField(cls, "OCM_DATA_ELEMENTS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPERATOR = new OcmMetadataKey(env->getStaticObjectField(cls, "OPERATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OPS_STATUS = new OcmMetadataKey(env->getStaticObjectField(cls, "OPS_STATUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORBIT_CATEGORY = new OcmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CATEGORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  ORIGINATOR_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "ORIGINATOR_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  OWNER = new OcmMetadataKey(env->getStaticObjectField(cls, "OWNER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PREVIOUS_MESSAGE_ID = new OcmMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  PRM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "PRM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  RDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "RDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_OFFSET_AT_EPOCH = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_OFFSET_AT_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  SCLK_SEC_PER_SI_SEC = new OcmMetadataKey(env->getStaticObjectField(cls, "SCLK_SEC_PER_SI_SEC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  START_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  STOP_TIME = new OcmMetadataKey(env->getStaticObjectField(cls, "STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TAIMUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "TAIMUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TDM_MSG_LINK = new OcmMetadataKey(env->getStaticObjectField(cls, "TDM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ADDRESS = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ADDRESS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_EMAIL = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_EMAIL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_ORG = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_ORG", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_PHONE = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_PHONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POC = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TECH_POSITION = new OcmMetadataKey(env->getStaticObjectField(cls, "TECH_POSITION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  TIME_SPAN = new OcmMetadataKey(env->getStaticObjectField(cls, "TIME_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  UT1MUTC_AT_TZERO = new OcmMetadataKey(env->getStaticObjectField(cls, "UT1MUTC_AT_TZERO", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_d82b13bed91c5a3a], a0.this$, a1.this$, a2.this$);
              }

              OcmMetadataKey OcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e7cf321c65e016d0], a0.this$));
              }

              JArray< OcmMetadataKey > OcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_f0edd35700594a55]));
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
            namespace ocm {
              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args);
              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data);
              static PyGetSetDef t_OcmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OcmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmMetadataKey)[] = {
                { Py_tp_methods, t_OcmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmMetadataKey, t_OcmMetadataKey, OcmMetadataKey);
              PyObject *t_OcmMetadataKey::wrap_Object(const OcmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmMetadataKey *self = (t_OcmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmMetadataKey), &PY_TYPE_DEF(OcmMetadataKey), module, "OcmMetadataKey", 0);
              }

              void t_OcmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "class_", make_descriptor(OcmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "wrapfn_", make_descriptor(t_OcmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ADM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ALTERNATE_NAMES", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ALTERNATE_NAMES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CATALOG_NAME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CATALOG_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CELESTIAL_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CELESTIAL_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "CONSTELLATION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::CONSTELLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "COUNTRY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::COUNTRY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EOP_SOURCE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EOP_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "EPOCH_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::EPOCH_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERNATIONAL_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "INTERP_METHOD_EOP", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::INTERP_METHOD_EOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_LEAP_TAIMUTC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_LEAP_TAIMUTC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "NEXT_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::NEXT_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_DESIGNATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OBJECT_TYPE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OBJECT_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OCM_DATA_ELEMENTS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OCM_DATA_ELEMENTS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPERATOR", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPERATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OPS_STATUS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OPS_STATUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORBIT_CATEGORY", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORBIT_CATEGORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "ORIGINATOR_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::ORIGINATOR_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "OWNER", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::OWNER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PREVIOUS_MESSAGE_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "PRM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::PRM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "RDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::RDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_OFFSET_AT_EPOCH", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_OFFSET_AT_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "SCLK_SEC_PER_SI_SEC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::SCLK_SEC_PER_SI_SEC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "START_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "STOP_TIME", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::STOP_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TAIMUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TAIMUTC_AT_TZERO)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TDM_MSG_LINK", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TDM_MSG_LINK)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ADDRESS", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ADDRESS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_EMAIL", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_EMAIL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_ORG", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_ORG)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_PHONE", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_PHONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POC", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TECH_POSITION", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TECH_POSITION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "TIME_SPAN", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::TIME_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmMetadataKey), "UT1MUTC_AT_TZERO", make_descriptor(t_OcmMetadataKey::wrap_Object(*OcmMetadataKey::UT1MUTC_AT_TZERO)));
              }

              static PyObject *t_OcmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OcmMetadataKey::wrap_Object(OcmMetadataKey(((t_OcmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OcmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmMetadataKey_of_(t_OcmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmMetadataKey_process(t_OcmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::valueOf(a0));
                  return t_OcmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OcmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OcmMetadataKey_get__parameters_(t_OcmMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Derivative::class$ = NULL;
        jmethodID *Derivative::mids$ = NULL;
        bool Derivative::live$ = false;

        jclass Derivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Derivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_compose_5e09d3ff87d23c4c] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_29ffeeddaa7151a9] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Derivative::compose(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_compose_5e09d3ff87d23c4c], a0.this$));
        }

        jint Derivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jint Derivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        jdouble Derivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_29ffeeddaa7151a9], a0.this$);
        }

        jdouble Derivative::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
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
        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args);
        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self);
        static PyObject *t_Derivative_getOrder(t_Derivative *self);
        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg);
        static PyObject *t_Derivative_getValue(t_Derivative *self);
        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data);
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data);
        static PyGetSetDef t_Derivative__fields_[] = {
          DECLARE_GET_FIELD(t_Derivative, freeParameters),
          DECLARE_GET_FIELD(t_Derivative, order),
          DECLARE_GET_FIELD(t_Derivative, value),
          DECLARE_GET_FIELD(t_Derivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Derivative__methods_[] = {
          DECLARE_METHOD(t_Derivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Derivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_Derivative, compose, METH_O),
          DECLARE_METHOD(t_Derivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Derivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_Derivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Derivative)[] = {
          { Py_tp_methods, t_Derivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Derivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Derivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(Derivative, t_Derivative, Derivative);
        PyObject *t_Derivative::wrap_Object(const Derivative& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Derivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Derivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Derivative *self = (t_Derivative *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Derivative::install(PyObject *module)
        {
          installType(&PY_TYPE(Derivative), &PY_TYPE_DEF(Derivative), module, "Derivative", 0);
        }

        void t_Derivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "class_", make_descriptor(Derivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "wrapfn_", make_descriptor(t_Derivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Derivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Derivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Derivative::initializeClass, 1)))
            return NULL;
          return t_Derivative::wrap_Object(Derivative(((t_Derivative *) arg)->object.this$));
        }
        static PyObject *t_Derivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Derivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Derivative_of_(t_Derivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Derivative_compose(t_Derivative *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getFreeParameters(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getOrder(t_Derivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Derivative_getPartialDerivative(t_Derivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_Derivative_getValue(t_Derivative *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }
        static PyObject *t_Derivative_get__parameters_(t_Derivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Derivative_get__freeParameters(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__order(t_Derivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Derivative_get__value(t_Derivative *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/ranking/TiesStrategy.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace ranking {

        ::java::lang::Class *TiesStrategy::class$ = NULL;
        jmethodID *TiesStrategy::mids$ = NULL;
        bool TiesStrategy::live$ = false;
        TiesStrategy *TiesStrategy::AVERAGE = NULL;
        TiesStrategy *TiesStrategy::MAXIMUM = NULL;
        TiesStrategy *TiesStrategy::MINIMUM = NULL;
        TiesStrategy *TiesStrategy::RANDOM = NULL;
        TiesStrategy *TiesStrategy::SEQUENTIAL = NULL;

        jclass TiesStrategy::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/ranking/TiesStrategy");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0f42fb7881e0f0ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/ranking/TiesStrategy;");
            mids$[mid_values_d7a13970eabf0784] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/ranking/TiesStrategy;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            AVERAGE = new TiesStrategy(env->getStaticObjectField(cls, "AVERAGE", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MAXIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MAXIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            MINIMUM = new TiesStrategy(env->getStaticObjectField(cls, "MINIMUM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            RANDOM = new TiesStrategy(env->getStaticObjectField(cls, "RANDOM", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            SEQUENTIAL = new TiesStrategy(env->getStaticObjectField(cls, "SEQUENTIAL", "Lorg/hipparchus/stat/ranking/TiesStrategy;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TiesStrategy TiesStrategy::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return TiesStrategy(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0f42fb7881e0f0ce], a0.this$));
        }

        JArray< TiesStrategy > TiesStrategy::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< TiesStrategy >(env->callStaticObjectMethod(cls, mids$[mid_values_d7a13970eabf0784]));
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
      namespace ranking {
        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args);
        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_TiesStrategy_values(PyTypeObject *type);
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data);
        static PyGetSetDef t_TiesStrategy__fields_[] = {
          DECLARE_GET_FIELD(t_TiesStrategy, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TiesStrategy__methods_[] = {
          DECLARE_METHOD(t_TiesStrategy, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, of_, METH_VARARGS),
          DECLARE_METHOD(t_TiesStrategy, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_TiesStrategy, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TiesStrategy)[] = {
          { Py_tp_methods, t_TiesStrategy__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_TiesStrategy__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TiesStrategy)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(TiesStrategy, t_TiesStrategy, TiesStrategy);
        PyObject *t_TiesStrategy::wrap_Object(const TiesStrategy& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TiesStrategy::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TiesStrategy::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TiesStrategy *self = (t_TiesStrategy *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TiesStrategy::install(PyObject *module)
        {
          installType(&PY_TYPE(TiesStrategy), &PY_TYPE_DEF(TiesStrategy), module, "TiesStrategy", 0);
        }

        void t_TiesStrategy::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "class_", make_descriptor(TiesStrategy::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "wrapfn_", make_descriptor(t_TiesStrategy::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "boxfn_", make_descriptor(boxObject));
          env->getClass(TiesStrategy::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "AVERAGE", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::AVERAGE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MAXIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MAXIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "MINIMUM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::MINIMUM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "RANDOM", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::RANDOM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TiesStrategy), "SEQUENTIAL", make_descriptor(t_TiesStrategy::wrap_Object(*TiesStrategy::SEQUENTIAL)));
        }

        static PyObject *t_TiesStrategy_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TiesStrategy::initializeClass, 1)))
            return NULL;
          return t_TiesStrategy::wrap_Object(TiesStrategy(((t_TiesStrategy *) arg)->object.this$));
        }
        static PyObject *t_TiesStrategy_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TiesStrategy::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TiesStrategy_of_(t_TiesStrategy *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_TiesStrategy_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          TiesStrategy result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::valueOf(a0));
            return t_TiesStrategy::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_TiesStrategy_values(PyTypeObject *type)
        {
          JArray< TiesStrategy > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::ranking::TiesStrategy::values());
          return JArray<jobject>(result.this$).wrap(t_TiesStrategy::wrap_jobject);
        }
        static PyObject *t_TiesStrategy_get__parameters_(t_TiesStrategy *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *IonosphericModel::class$ = NULL;
          jmethodID *IonosphericModel::mids$ = NULL;
          bool IonosphericModel::live$ = false;

          jclass IonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/IonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_pathDelay_78d4f8498e981bf5] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_c824fdb3e595a2ae] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement IonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_78d4f8498e981bf5], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble IonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_c824fdb3e595a2ae], a0.this$, a1.this$, a2, a3.this$);
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
        namespace ionosphere {
          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args);

          static PyMethodDef t_IonosphericModel__methods_[] = {
            DECLARE_METHOD(t_IonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericModel)[] = {
            { Py_tp_methods, t_IonosphericModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(IonosphericModel, t_IonosphericModel, IonosphericModel);

          void t_IonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericModel), &PY_TYPE_DEF(IonosphericModel), module, "IonosphericModel", 0);
          }

          void t_IonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "class_", make_descriptor(IonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "wrapfn_", make_descriptor(t_IonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericModel::initializeClass, 1)))
              return NULL;
            return t_IonosphericModel::wrap_Object(IonosphericModel(((t_IonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_IonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericModel_pathDelay(t_IonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/estimation/measurements/PythonEstimationsProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationsProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonEstimationsProvider::class$ = NULL;
        jmethodID *PythonEstimationsProvider::mids$ = NULL;
        bool PythonEstimationsProvider::live$ = false;

        jclass PythonEstimationsProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonEstimationsProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getEstimatedMeasurement_4b39cdd283f0ffac] = env->getMethodID(cls, "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getNumber_f2f64475e4580546] = env->getMethodID(cls, "getNumber", "()I");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEstimationsProvider::PythonEstimationsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonEstimationsProvider::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonEstimationsProvider::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonEstimationsProvider::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self);
        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args);
        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0);
        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data);
        static PyGetSetDef t_PythonEstimationsProvider__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEstimationsProvider, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEstimationsProvider__methods_[] = {
          DECLARE_METHOD(t_PythonEstimationsProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEstimationsProvider, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEstimationsProvider, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEstimationsProvider)[] = {
          { Py_tp_methods, t_PythonEstimationsProvider__methods_ },
          { Py_tp_init, (void *) t_PythonEstimationsProvider_init_ },
          { Py_tp_getset, t_PythonEstimationsProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEstimationsProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEstimationsProvider, t_PythonEstimationsProvider, PythonEstimationsProvider);

        void t_PythonEstimationsProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEstimationsProvider), &PY_TYPE_DEF(PythonEstimationsProvider), module, "PythonEstimationsProvider", 1);
        }

        void t_PythonEstimationsProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "class_", make_descriptor(PythonEstimationsProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "wrapfn_", make_descriptor(t_PythonEstimationsProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEstimationsProvider), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEstimationsProvider::initializeClass);
          JNINativeMethod methods[] = {
            { "getEstimatedMeasurement", "(I)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonEstimationsProvider_getEstimatedMeasurement0 },
            { "getNumber", "()I", (void *) t_PythonEstimationsProvider_getNumber1 },
            { "pythonDecRef", "()V", (void *) t_PythonEstimationsProvider_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEstimationsProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEstimationsProvider::initializeClass, 1)))
            return NULL;
          return t_PythonEstimationsProvider::wrap_Object(PythonEstimationsProvider(((t_PythonEstimationsProvider *) arg)->object.this$));
        }
        static PyObject *t_PythonEstimationsProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEstimationsProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEstimationsProvider_init_(t_PythonEstimationsProvider *self, PyObject *args, PyObject *kwds)
        {
          PythonEstimationsProvider object((jobject) NULL);

          INT_CALL(object = PythonEstimationsProvider());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEstimationsProvider_finalize(t_PythonEstimationsProvider *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEstimationsProvider_pythonExtension(t_PythonEstimationsProvider *self, PyObject *args)
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

        static jobject JNICALL t_PythonEstimationsProvider_getEstimatedMeasurement0(JNIEnv *jenv, jobject jobj, jint a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEstimatedMeasurement", "i", (int) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("getEstimatedMeasurement", result);
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

        static jint JNICALL t_PythonEstimationsProvider_getNumber1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *result = PyObject_CallMethod(obj, "getNumber", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("getNumber", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static void JNICALL t_PythonEstimationsProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEstimationsProvider::mids$[PythonEstimationsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEstimationsProvider_get__self(t_PythonEstimationsProvider *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory$DSField::class$ = NULL;
        jmethodID *DSFactory$DSField::mids$ = NULL;
        bool DSFactory$DSField::live$ = false;

        jclass DSFactory$DSField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory$DSField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_c8ca2097cc2fbc0a] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getPi_c8ca2097cc2fbc0a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_c8ca2097cc2fbc0a] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean DSFactory$DSField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_c8ca2097cc2fbc0a]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_c8ca2097cc2fbc0a]));
        }

        ::java::lang::Class DSFactory$DSField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_c8ca2097cc2fbc0a]));
        }

        jint DSFactory$DSField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
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
        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data);
        static PyGetSetDef t_DSFactory$DSField__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory$DSField, one),
          DECLARE_GET_FIELD(t_DSFactory$DSField, pi),
          DECLARE_GET_FIELD(t_DSFactory$DSField, runtimeClass),
          DECLARE_GET_FIELD(t_DSFactory$DSField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory$DSField__methods_[] = {
          DECLARE_METHOD(t_DSFactory$DSField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, equals, METH_VARARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory$DSField)[] = {
          { Py_tp_methods, t_DSFactory$DSField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSFactory$DSField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory$DSField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory$DSField, t_DSFactory$DSField, DSFactory$DSField);

        void t_DSFactory$DSField::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory$DSField), &PY_TYPE_DEF(DSFactory$DSField), module, "DSFactory$DSField", 0);
        }

        void t_DSFactory$DSField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "class_", make_descriptor(DSFactory$DSField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "wrapfn_", make_descriptor(t_DSFactory$DSField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory$DSField::initializeClass, 1)))
            return NULL;
          return t_DSFactory$DSField::wrap_Object(DSFactory$DSField(((t_DSFactory$DSField *) arg)->object.this$));
        }
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory$DSField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonConstants.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/Constants.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonConstants::class$ = NULL;
      jmethodID *PythonConstants::mids$ = NULL;
      bool PythonConstants::live$ = false;

      jclass PythonConstants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonConstants");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonConstants::PythonConstants() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonConstants::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonConstants::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonConstants::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self);
      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args);
      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data);
      static PyGetSetDef t_PythonConstants__fields_[] = {
        DECLARE_GET_FIELD(t_PythonConstants, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonConstants__methods_[] = {
        DECLARE_METHOD(t_PythonConstants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonConstants, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonConstants, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonConstants)[] = {
        { Py_tp_methods, t_PythonConstants__methods_ },
        { Py_tp_init, (void *) t_PythonConstants_init_ },
        { Py_tp_getset, t_PythonConstants__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonConstants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonConstants, t_PythonConstants, PythonConstants);

      void t_PythonConstants::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonConstants), &PY_TYPE_DEF(PythonConstants), module, "PythonConstants", 1);
      }

      void t_PythonConstants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "class_", make_descriptor(PythonConstants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "wrapfn_", make_descriptor(t_PythonConstants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonConstants), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonConstants::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonConstants_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonConstants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonConstants::initializeClass, 1)))
          return NULL;
        return t_PythonConstants::wrap_Object(PythonConstants(((t_PythonConstants *) arg)->object.this$));
      }
      static PyObject *t_PythonConstants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonConstants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonConstants_init_(t_PythonConstants *self, PyObject *args, PyObject *kwds)
      {
        PythonConstants object((jobject) NULL);

        INT_CALL(object = PythonConstants());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonConstants_finalize(t_PythonConstants *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonConstants_pythonExtension(t_PythonConstants *self, PyObject *args)
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

      static void JNICALL t_PythonConstants_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonConstants::mids$[PythonConstants::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonConstants_get__self(t_PythonConstants *self, void *data)
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
