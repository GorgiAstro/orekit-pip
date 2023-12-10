#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTAtmosphericDrag.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
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
                mids$[mid_init$_8cf2088f47a57337] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/drag/DragForce;D)V");
                mids$[mid_init$_93fb7884d0731876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;D)V");
                mids$[mid_init$_fbe0d84084597736] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;DDD)V");
                mids$[mid_getAtmosphere_5eed92b432f371c2] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
                mids$[mid_getDrag_ab37bc06056a6237] = env->getMethodID(cls, "getDrag", "()Lorg/orekit/forces/drag/DragForce;");
                mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
                mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
                mids$[mid_getRbar_dff5885c2c873297] = env->getMethodID(cls, "getRbar", "()D");
                mids$[mid_getSpacecraft_2df1d9602f270c8d] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");
                mids$[mid_getLLimits_04690aaa2b6db52c] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;)[D");
                mids$[mid_getLLimits_7442885516ff2293] = env->getMethodID(cls, "getLLimits", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDriversWithoutMu_2afa36052df4765d] = env->getMethodID(cls, "getParametersDriversWithoutMu", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::forces::drag::DragForce & a0, jdouble a1) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_8cf2088f47a57337, a0.this$, a1)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1, jdouble a2) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_93fb7884d0731876, a0.this$, a1.this$, a2)) {}

            DSSTAtmosphericDrag::DSSTAtmosphericDrag(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(env->newObject(initializeClass, &mids$, mid_init$_fbe0d84084597736, a0.this$, a1, a2, a3)) {}

            ::org::orekit::models::earth::atmosphere::Atmosphere DSSTAtmosphericDrag::getAtmosphere() const
            {
              return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_5eed92b432f371c2]));
            }

            ::org::orekit::forces::drag::DragForce DSSTAtmosphericDrag::getDrag() const
            {
              return ::org::orekit::forces::drag::DragForce(env->callObjectMethod(this$, mids$[mid_getDrag_ab37bc06056a6237]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getEventDetectors() const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
            }

            ::java::util::stream::Stream DSSTAtmosphericDrag::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
            {
              return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
            }

            jdouble DSSTAtmosphericDrag::getRbar() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRbar_dff5885c2c873297]);
            }

            ::org::orekit::forces::drag::DragSensitive DSSTAtmosphericDrag::getSpacecraft() const
            {
              return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_2df1d9602f270c8d]));
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
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader$Parser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader$Parser::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader$Parser::mids$ = NULL;
      bool AGILeapSecondFilesLoader$Parser::live$ = false;

      jclass AGILeapSecondFilesLoader$Parser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader$Parser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_parse_19eef1cf230063a6] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader$Parser::AGILeapSecondFilesLoader$Parser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::java::util::List AGILeapSecondFilesLoader$Parser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_parse_19eef1cf230063a6], a0.this$, a1.this$));
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
      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args);

      static PyMethodDef t_AGILeapSecondFilesLoader$Parser__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader$Parser, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader$Parser)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader$Parser__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader$Parser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader$Parser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader$Parser, t_AGILeapSecondFilesLoader$Parser, AGILeapSecondFilesLoader$Parser);

      void t_AGILeapSecondFilesLoader$Parser::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader$Parser), &PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser), module, "AGILeapSecondFilesLoader$Parser", 0);
      }

      void t_AGILeapSecondFilesLoader$Parser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "class_", make_descriptor(AGILeapSecondFilesLoader$Parser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader$Parser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader$Parser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader$Parser::wrap_Object(AGILeapSecondFilesLoader$Parser(((t_AGILeapSecondFilesLoader$Parser *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader$Parser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader$Parser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader$Parser_init_(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args, PyObject *kwds)
      {
        AGILeapSecondFilesLoader$Parser object((jobject) NULL);

        INT_CALL(object = AGILeapSecondFilesLoader$Parser());
        self->object = object;

        return 0;
      }

      static PyObject *t_AGILeapSecondFilesLoader$Parser_parse(t_AGILeapSecondFilesLoader$Parser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/ObjectOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/ObjectStreamConstants.h"
#include "java/io/ObjectOutputStream$PutField.h"
#include "java/io/ObjectOutput.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *ObjectOutputStream::class$ = NULL;
    jmethodID *ObjectOutputStream::mids$ = NULL;
    bool ObjectOutputStream::live$ = false;

    jclass ObjectOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/ObjectOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_fd7cb6689cfa6eeb] = env->getMethodID(cls, "<init>", "(Ljava/io/OutputStream;)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_defaultWriteObject_0fa09c18fee449d5] = env->getMethodID(cls, "defaultWriteObject", "()V");
        mids$[mid_flush_0fa09c18fee449d5] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_putFields_a1d0dbdcb12b349b] = env->getMethodID(cls, "putFields", "()Ljava/io/ObjectOutputStream$PutField;");
        mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_useProtocolVersion_99803b0791f320ff] = env->getMethodID(cls, "useProtocolVersion", "(I)V");
        mids$[mid_write_20012b3010a39c05] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_99803b0791f320ff] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_d7af9aedcdd3845b] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_writeBoolean_bd04c9335fb9e4cf] = env->getMethodID(cls, "writeBoolean", "(Z)V");
        mids$[mid_writeByte_99803b0791f320ff] = env->getMethodID(cls, "writeByte", "(I)V");
        mids$[mid_writeBytes_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeBytes", "(Ljava/lang/String;)V");
        mids$[mid_writeChar_99803b0791f320ff] = env->getMethodID(cls, "writeChar", "(I)V");
        mids$[mid_writeChars_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeChars", "(Ljava/lang/String;)V");
        mids$[mid_writeDouble_17db3a65980d3441] = env->getMethodID(cls, "writeDouble", "(D)V");
        mids$[mid_writeFields_0fa09c18fee449d5] = env->getMethodID(cls, "writeFields", "()V");
        mids$[mid_writeFloat_f63147a1690942cc] = env->getMethodID(cls, "writeFloat", "(F)V");
        mids$[mid_writeInt_99803b0791f320ff] = env->getMethodID(cls, "writeInt", "(I)V");
        mids$[mid_writeLong_3a8e7649f31fdb20] = env->getMethodID(cls, "writeLong", "(J)V");
        mids$[mid_writeObject_2990946c992aafed] = env->getMethodID(cls, "writeObject", "(Ljava/lang/Object;)V");
        mids$[mid_writeShort_99803b0791f320ff] = env->getMethodID(cls, "writeShort", "(I)V");
        mids$[mid_writeUTF_d0bc48d5b00dc40c] = env->getMethodID(cls, "writeUTF", "(Ljava/lang/String;)V");
        mids$[mid_writeUnshared_2990946c992aafed] = env->getMethodID(cls, "writeUnshared", "(Ljava/lang/Object;)V");
        mids$[mid_writeStreamHeader_0fa09c18fee449d5] = env->getMethodID(cls, "writeStreamHeader", "()V");
        mids$[mid_writeObjectOverride_2990946c992aafed] = env->getMethodID(cls, "writeObjectOverride", "(Ljava/lang/Object;)V");
        mids$[mid_annotateClass_834972a40792b06e] = env->getMethodID(cls, "annotateClass", "(Ljava/lang/Class;)V");
        mids$[mid_annotateProxyClass_834972a40792b06e] = env->getMethodID(cls, "annotateProxyClass", "(Ljava/lang/Class;)V");
        mids$[mid_replaceObject_9facd1449e0950d3] = env->getMethodID(cls, "replaceObject", "(Ljava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_enableReplaceObject_29387014c78e7f59] = env->getMethodID(cls, "enableReplaceObject", "(Z)Z");
        mids$[mid_writeClassDescriptor_1e954de573b583fc] = env->getMethodID(cls, "writeClassDescriptor", "(Ljava/io/ObjectStreamClass;)V");
        mids$[mid_drain_0fa09c18fee449d5] = env->getMethodID(cls, "drain", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ObjectOutputStream::ObjectOutputStream(const ::java::io::OutputStream & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_fd7cb6689cfa6eeb, a0.this$)) {}

    void ObjectOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    void ObjectOutputStream::defaultWriteObject() const
    {
      env->callVoidMethod(this$, mids$[mid_defaultWriteObject_0fa09c18fee449d5]);
    }

    void ObjectOutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_0fa09c18fee449d5]);
    }

    ::java::io::ObjectOutputStream$PutField ObjectOutputStream::putFields() const
    {
      return ::java::io::ObjectOutputStream$PutField(env->callObjectMethod(this$, mids$[mid_putFields_a1d0dbdcb12b349b]));
    }

    void ObjectOutputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
    }

    void ObjectOutputStream::useProtocolVersion(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_useProtocolVersion_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_20012b3010a39c05], a0.this$);
    }

    void ObjectOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_d7af9aedcdd3845b], a0.this$, a1, a2);
    }

    void ObjectOutputStream::writeBoolean(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBoolean_bd04c9335fb9e4cf], a0);
    }

    void ObjectOutputStream::writeByte(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeByte_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::writeBytes(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeBytes_d0bc48d5b00dc40c], a0.this$);
    }

    void ObjectOutputStream::writeChar(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChar_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::writeChars(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeChars_d0bc48d5b00dc40c], a0.this$);
    }

    void ObjectOutputStream::writeDouble(jdouble a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeDouble_17db3a65980d3441], a0);
    }

    void ObjectOutputStream::writeFields() const
    {
      env->callVoidMethod(this$, mids$[mid_writeFields_0fa09c18fee449d5]);
    }

    void ObjectOutputStream::writeFloat(jfloat a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeFloat_f63147a1690942cc], a0);
    }

    void ObjectOutputStream::writeInt(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeInt_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::writeLong(jlong a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeLong_3a8e7649f31fdb20], a0);
    }

    void ObjectOutputStream::writeObject(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeObject_2990946c992aafed], a0.this$);
    }

    void ObjectOutputStream::writeShort(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeShort_99803b0791f320ff], a0);
    }

    void ObjectOutputStream::writeUTF(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUTF_d0bc48d5b00dc40c], a0.this$);
    }

    void ObjectOutputStream::writeUnshared(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_writeUnshared_2990946c992aafed], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args);
    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self);
    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg);
    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg);

    static PyMethodDef t_ObjectOutputStream__methods_[] = {
      DECLARE_METHOD(t_ObjectOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ObjectOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, defaultWriteObject, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, flush, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, putFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, useProtocolVersion, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, write, METH_VARARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeBoolean, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeByte, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeBytes, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChar, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeChars, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeDouble, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeFields, METH_NOARGS),
      DECLARE_METHOD(t_ObjectOutputStream, writeFloat, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeInt, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeLong, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeObject, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeShort, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUTF, METH_O),
      DECLARE_METHOD(t_ObjectOutputStream, writeUnshared, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ObjectOutputStream)[] = {
      { Py_tp_methods, t_ObjectOutputStream__methods_ },
      { Py_tp_init, (void *) t_ObjectOutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ObjectOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(ObjectOutputStream, t_ObjectOutputStream, ObjectOutputStream);

    void t_ObjectOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(ObjectOutputStream), &PY_TYPE_DEF(ObjectOutputStream), module, "ObjectOutputStream", 0);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "PutField", make_descriptor(&PY_TYPE_DEF(ObjectOutputStream$PutField)));
    }

    void t_ObjectOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "class_", make_descriptor(ObjectOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "wrapfn_", make_descriptor(t_ObjectOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ObjectOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ObjectOutputStream::initializeClass, 1)))
        return NULL;
      return t_ObjectOutputStream::wrap_Object(ObjectOutputStream(((t_ObjectOutputStream *) arg)->object.this$));
    }
    static PyObject *t_ObjectOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ObjectOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_ObjectOutputStream_init_(t_ObjectOutputStream *self, PyObject *args, PyObject *kwds)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      ObjectOutputStream object((jobject) NULL);

      if (!parseArgs(args, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        INT_CALL(object = ObjectOutputStream(a0));
        self->object = object;
      }
      else
      {
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_ObjectOutputStream_close(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_ObjectOutputStream_defaultWriteObject(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.defaultWriteObject());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_flush(t_ObjectOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.flush());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "flush", args, 2);
    }

    static PyObject *t_ObjectOutputStream_putFields(t_ObjectOutputStream *self)
    {
      ::java::io::ObjectOutputStream$PutField result((jobject) NULL);
      OBJ_CALL(result = self->object.putFields());
      return ::java::io::t_ObjectOutputStream$PutField::wrap_Object(result);
    }

    static PyObject *t_ObjectOutputStream_reset(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_useProtocolVersion(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.useProtocolVersion(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "useProtocolVersion", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_write(t_ObjectOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(ObjectOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_ObjectOutputStream_writeBoolean(t_ObjectOutputStream *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.writeBoolean(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBoolean", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeByte(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeByte(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeByte", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeBytes(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeBytes(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeBytes", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChar(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeChar(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChar", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeChars(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeChars(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeChars", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeDouble(t_ObjectOutputStream *self, PyObject *arg)
    {
      jdouble a0;

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(self->object.writeDouble(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeDouble", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeFields(t_ObjectOutputStream *self)
    {
      OBJ_CALL(self->object.writeFields());
      Py_RETURN_NONE;
    }

    static PyObject *t_ObjectOutputStream_writeFloat(t_ObjectOutputStream *self, PyObject *arg)
    {
      jfloat a0;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(self->object.writeFloat(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeFloat", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeInt(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeInt(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeInt", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeLong(t_ObjectOutputStream *self, PyObject *arg)
    {
      jlong a0;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(self->object.writeLong(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeLong", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeObject(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeObject(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeObject", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeShort(t_ObjectOutputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.writeShort(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeShort", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUTF(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.writeUTF(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUTF", arg);
      return NULL;
    }

    static PyObject *t_ObjectOutputStream_writeUnshared(t_ObjectOutputStream *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(self->object.writeUnshared(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "writeUnshared", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TrivariateGridInterpolator::class$ = NULL;
        jmethodID *TrivariateGridInterpolator::mids$ = NULL;
        bool TrivariateGridInterpolator::live$ = false;

        jclass TrivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TrivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_b8e01c2cd251591c] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/TrivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::TrivariateFunction TrivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::TrivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_b8e01c2cd251591c], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace interpolation {
        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_TrivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_TrivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrivariateGridInterpolator)[] = {
          { Py_tp_methods, t_TrivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TrivariateGridInterpolator, t_TrivariateGridInterpolator, TrivariateGridInterpolator);

        void t_TrivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrivariateGridInterpolator), &PY_TYPE_DEF(TrivariateGridInterpolator), module, "TrivariateGridInterpolator", 0);
        }

        void t_TrivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "class_", make_descriptor(TrivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "wrapfn_", make_descriptor(t_TrivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_TrivariateGridInterpolator::wrap_Object(TrivariateGridInterpolator(((t_TrivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::TrivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::t_TrivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *PerturbationsKey::class$ = NULL;
              jmethodID *PerturbationsKey::mids$ = NULL;
              bool PerturbationsKey::live$ = false;
              PerturbationsKey *PerturbationsKey::ALBEDO_GRID_SIZE = NULL;
              PerturbationsKey *PerturbationsKey::ALBEDO_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::ATMOSPHERIC_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::CENTRAL_BODY_ROTATION = NULL;
              PerturbationsKey *PerturbationsKey::COMMENT = NULL;
              PerturbationsKey *PerturbationsKey::EQUATORIAL_RADIUS = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_AP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_DST = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_KP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::GM = NULL;
              PerturbationsKey *PerturbationsKey::GRAVITY_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::N_BODY_PERTURBATIONS = NULL;
              PerturbationsKey *PerturbationsKey::OBLATE_FLATTENING = NULL;
              PerturbationsKey *PerturbationsKey::OCEAN_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::REDUCTION_THEORY = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_BODIES = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SOLID_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SRP_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_EPOCH = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_SOURCE = NULL;
              PerturbationsKey *PerturbationsKey::SW_INTERP_METHOD = NULL;

              jclass PerturbationsKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_efedbbc9f9f45bca] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;)Z");
                  mids$[mid_valueOf_fe61e7640ca9628c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");
                  mids$[mid_values_e3065fb2163fd379] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALBEDO_GRID_SIZE = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_GRID_SIZE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ALBEDO_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ATMOSPHERIC_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  CENTRAL_BODY_ROTATION = new PerturbationsKey(env->getStaticObjectField(cls, "CENTRAL_BODY_ROTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  COMMENT = new PerturbationsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  EQUATORIAL_RADIUS = new PerturbationsKey(env->getStaticObjectField(cls, "EQUATORIAL_RADIUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_AP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_AP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_DST = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_DST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_KP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_KP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GM = new PerturbationsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GRAVITY_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  N_BODY_PERTURBATIONS = new PerturbationsKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OBLATE_FLATTENING = new PerturbationsKey(env->getStaticObjectField(cls, "OBLATE_FLATTENING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OCEAN_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "OCEAN_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  REDUCTION_THEORY = new PerturbationsKey(env->getStaticObjectField(cls, "REDUCTION_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_BODIES = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_BODIES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SOLID_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SOLID_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SRP_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SRP_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_EPOCH = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_SOURCE = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_INTERP_METHOD = new PerturbationsKey(env->getStaticObjectField(cls, "SW_INTERP_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean PerturbationsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_efedbbc9f9f45bca], a0.this$, a1.this$, a2.this$);
              }

              PerturbationsKey PerturbationsKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return PerturbationsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fe61e7640ca9628c], a0.this$));
              }

              JArray< PerturbationsKey > PerturbationsKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< PerturbationsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e3065fb2163fd379]));
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
              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_PerturbationsKey_values(PyTypeObject *type);
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data);
              static PyGetSetDef t_PerturbationsKey__fields_[] = {
                DECLARE_GET_FIELD(t_PerturbationsKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PerturbationsKey__methods_[] = {
                DECLARE_METHOD(t_PerturbationsKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, process, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PerturbationsKey)[] = {
                { Py_tp_methods, t_PerturbationsKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PerturbationsKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PerturbationsKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(PerturbationsKey, t_PerturbationsKey, PerturbationsKey);
              PyObject *t_PerturbationsKey::wrap_Object(const PerturbationsKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_PerturbationsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_PerturbationsKey::install(PyObject *module)
              {
                installType(&PY_TYPE(PerturbationsKey), &PY_TYPE_DEF(PerturbationsKey), module, "PerturbationsKey", 0);
              }

              void t_PerturbationsKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "class_", make_descriptor(PerturbationsKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "wrapfn_", make_descriptor(t_PerturbationsKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(PerturbationsKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_GRID_SIZE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_GRID_SIZE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ATMOSPHERIC_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ATMOSPHERIC_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "CENTRAL_BODY_ROTATION", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::CENTRAL_BODY_ROTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "COMMENT", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "EQUATORIAL_RADIUS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::EQUATORIAL_RADIUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_AP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_AP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_DST", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_DST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_KP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_KP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GM", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GRAVITY_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GRAVITY_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "N_BODY_PERTURBATIONS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::N_BODY_PERTURBATIONS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OBLATE_FLATTENING", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OBLATE_FLATTENING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OCEAN_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OCEAN_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "REDUCTION_THEORY", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::REDUCTION_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_BODIES", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_BODIES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SOLID_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SOLID_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SRP_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SRP_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_EPOCH", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_SOURCE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_INTERP_METHOD", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_INTERP_METHOD)));
              }

              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PerturbationsKey::initializeClass, 1)))
                  return NULL;
                return t_PerturbationsKey::wrap_Object(PerturbationsKey(((t_PerturbationsKey *) arg)->object.this$));
              }
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PerturbationsKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                PerturbationsKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::valueOf(a0));
                  return t_PerturbationsKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_PerturbationsKey_values(PyTypeObject *type)
              {
                JArray< PerturbationsKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::values());
                return JArray<jobject>(result.this$).wrap(t_PerturbationsKey::wrap_jobject);
              }
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock::class$ = NULL;
          jmethodID *RinexClock::mids$ = NULL;
          bool RinexClock::live$ = false;

          jclass RinexClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addAppliedDCBS_924dc948b3328b0a] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_6ae122bae3989b66] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addClockData_d888854f9d0ae85c] = env->getMethodID(cls, "addClockData", "(Ljava/lang/String;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataLine;)V");
              mids$[mid_addClockDataType_5a544f9f8d7ed222] = env->getMethodID(cls, "addClockDataType", "(Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;)V");
              mids$[mid_addComment_d0bc48d5b00dc40c] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
              mids$[mid_addReceiver_3dbb707d27298420] = env->getMethodID(cls, "addReceiver", "(Lorg/orekit/files/rinex/clock/RinexClock$Receiver;)V");
              mids$[mid_addReferenceClockList_741f4d97cd6d356c] = env->getMethodID(cls, "addReferenceClockList", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addSatellite_d0bc48d5b00dc40c] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
              mids$[mid_addSystemObservationType_8fc5b84e4c4bbff7] = env->getMethodID(cls, "addSystemObservationType", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getAgencyName_11b109bd155ca898] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterID_11b109bd155ca898] = env->getMethodID(cls, "getAnalysisCenterID", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterName_11b109bd155ca898] = env->getMethodID(cls, "getAnalysisCenterName", "()Ljava/lang/String;");
              mids$[mid_getClockData_6f5a75ccd8c04465] = env->getMethodID(cls, "getClockData", "()Ljava/util/Map;");
              mids$[mid_getClockDataTypes_2afa36052df4765d] = env->getMethodID(cls, "getClockDataTypes", "()Ljava/util/List;");
              mids$[mid_getComments_11b109bd155ca898] = env->getMethodID(cls, "getComments", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_85703d13e302437e] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateString_11b109bd155ca898] = env->getMethodID(cls, "getCreationDateString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeString_11b109bd155ca898] = env->getMethodID(cls, "getCreationTimeString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeZoneString_11b109bd155ca898] = env->getMethodID(cls, "getCreationTimeZoneString", "()Ljava/lang/String;");
              mids$[mid_getExternalClockReference_11b109bd155ca898] = env->getMethodID(cls, "getExternalClockReference", "()Ljava/lang/String;");
              mids$[mid_getFormatVersion_dff5885c2c873297] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrameName_11b109bd155ca898] = env->getMethodID(cls, "getFrameName", "()Ljava/lang/String;");
              mids$[mid_getListAppliedDCBS_2afa36052df4765d] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_2afa36052df4765d] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getNumberOfClockDataTypes_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfClockDataTypes", "()I");
              mids$[mid_getNumberOfLeapSeconds_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getNumberOfLeapSecondsGNSS_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfLeapSecondsGNSS", "()I");
              mids$[mid_getNumberOfReceivers_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfReceivers", "()I");
              mids$[mid_getNumberOfSatellites_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
              mids$[mid_getProgramName_11b109bd155ca898] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getReceivers_2afa36052df4765d] = env->getMethodID(cls, "getReceivers", "()Ljava/util/List;");
              mids$[mid_getReferenceClocks_62c7757711639c83] = env->getMethodID(cls, "getReferenceClocks", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_getSatelliteSystem_01acae5c1a253b8e] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatellites_2afa36052df4765d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
              mids$[mid_getStationIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getStationIdentifier", "()Ljava/lang/String;");
              mids$[mid_getStationName_11b109bd155ca898] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
              mids$[mid_getSystemObservationTypes_6f5a75ccd8c04465] = env->getMethodID(cls, "getSystemObservationTypes", "()Ljava/util/Map;");
              mids$[mid_getTimeScale_c39031284193adbe] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_getTimeSystem_47ed81afbc0cea8f] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getTotalNumberOfDataLines_570ce0828f81a2c1] = env->getMethodID(cls, "getTotalNumberOfDataLines", "()I");
              mids$[mid_numberOfObsTypes_9de121449265fcae] = env->getMethodID(cls, "numberOfObsTypes", "(Lorg/orekit/gnss/SatelliteSystem;)I");
              mids$[mid_setAgencyName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAnalysisCenterID", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setAnalysisCenterName", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_600a2a61652bc473] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateString_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCreationDateString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeString_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCreationTimeString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeZoneString_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCreationTimeZoneString", "(Ljava/lang/String;)V");
              mids$[mid_setExternalClockReference_d0bc48d5b00dc40c] = env->getMethodID(cls, "setExternalClockReference", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_17db3a65980d3441] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setFrameName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setFrameName", "(Ljava/lang/String;)V");
              mids$[mid_setNumberOfLeapSeconds_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");
              mids$[mid_setNumberOfLeapSecondsGNSS_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfLeapSecondsGNSS", "(I)V");
              mids$[mid_setProgramName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_10d44f5686b1d39e] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationIdentifier_d0bc48d5b00dc40c] = env->getMethodID(cls, "setStationIdentifier", "(Ljava/lang/String;)V");
              mids$[mid_setStationName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
              mids$[mid_setTimeScale_e93d77ad761aa1f2] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_setTimeSystem_188d9681dd6fbe69] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void RinexClock::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_924dc948b3328b0a], a0.this$);
          }

          void RinexClock::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_6ae122bae3989b66], a0.this$);
          }

          void RinexClock::addClockData(const ::java::lang::String & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockData_d888854f9d0ae85c], a0.this$, a1.this$);
          }

          void RinexClock::addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockDataType_5a544f9f8d7ed222], a0.this$);
          }

          void RinexClock::addComment(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addComment_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addReceiver_3dbb707d27298420], a0.this$);
          }

          void RinexClock::addReferenceClockList(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addReferenceClockList_741f4d97cd6d356c], a0.this$, a1.this$);
          }

          void RinexClock::addSatellite(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSatellite_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemObservationType_8fc5b84e4c4bbff7], a0.this$, a1.this$);
          }

          ::java::lang::String RinexClock::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterID_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterName_11b109bd155ca898]));
          }

          ::java::util::Map RinexClock::getClockData() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getClockData_6f5a75ccd8c04465]));
          }

          ::java::util::List RinexClock::getClockDataTypes() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getClockDataTypes_2afa36052df4765d]));
          }

          ::java::lang::String RinexClock::getComments() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getComments_11b109bd155ca898]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_85703d13e302437e]));
          }

          ::java::lang::String RinexClock::getCreationDateString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationDateString_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getCreationTimeString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeString_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getCreationTimeZoneString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZoneString_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getExternalClockReference() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalClockReference_11b109bd155ca898]));
          }

          jdouble RinexClock::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_dff5885c2c873297]);
          }

          ::org::orekit::frames::Frame RinexClock::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
          }

          ::java::lang::String RinexClock::getFrameName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrameName_11b109bd155ca898]));
          }

          ::java::util::List RinexClock::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_2afa36052df4765d]));
          }

          ::java::util::List RinexClock::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_2afa36052df4765d]));
          }

          jint RinexClock::getNumberOfClockDataTypes() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfClockDataTypes_570ce0828f81a2c1]);
          }

          jint RinexClock::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_570ce0828f81a2c1]);
          }

          jint RinexClock::getNumberOfLeapSecondsGNSS() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSecondsGNSS_570ce0828f81a2c1]);
          }

          jint RinexClock::getNumberOfReceivers() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfReceivers_570ce0828f81a2c1]);
          }

          jint RinexClock::getNumberOfSatellites() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_570ce0828f81a2c1]);
          }

          ::java::lang::String RinexClock::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_11b109bd155ca898]));
          }

          ::java::util::List RinexClock::getReceivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceivers_2afa36052df4765d]));
          }

          ::org::orekit::utils::TimeSpanMap RinexClock::getReferenceClocks() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getReferenceClocks_62c7757711639c83]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexClock::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_01acae5c1a253b8e]));
          }

          ::java::util::List RinexClock::getSatellites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_2afa36052df4765d]));
          }

          ::java::lang::String RinexClock::getStationIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationIdentifier_11b109bd155ca898]));
          }

          ::java::lang::String RinexClock::getStationName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_11b109bd155ca898]));
          }

          ::java::util::Map RinexClock::getSystemObservationTypes() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSystemObservationTypes_6f5a75ccd8c04465]));
          }

          ::org::orekit::time::TimeScale RinexClock::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_c39031284193adbe]));
          }

          ::org::orekit::gnss::TimeSystem RinexClock::getTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_47ed81afbc0cea8f]));
          }

          jint RinexClock::getTotalNumberOfDataLines() const
          {
            return env->callIntMethod(this$, mids$[mid_getTotalNumberOfDataLines_570ce0828f81a2c1]);
          }

          jint RinexClock::numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfObsTypes_9de121449265fcae], a0.this$);
          }

          void RinexClock::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setAnalysisCenterID(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterID_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setAnalysisCenterName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_600a2a61652bc473], a0.this$);
          }

          void RinexClock::setCreationDateString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateString_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setCreationTimeString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeString_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setCreationTimeZoneString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZoneString_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setExternalClockReference(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setExternalClockReference_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_17db3a65980d3441], a0);
          }

          void RinexClock::setFrameName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFrameName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_99803b0791f320ff], a0);
          }

          void RinexClock::setNumberOfLeapSecondsGNSS(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSecondsGNSS_99803b0791f320ff], a0);
          }

          void RinexClock::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_10d44f5686b1d39e], a0.this$);
          }

          void RinexClock::setStationIdentifier(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationIdentifier_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setStationName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationName_d0bc48d5b00dc40c], a0.this$);
          }

          void RinexClock::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeScale_e93d77ad761aa1f2], a0.this$);
          }

          void RinexClock::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_188d9681dd6fbe69], a0.this$);
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
        namespace clock {
          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockData(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getComments(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self);
          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self);
          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrame(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self);
          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationName(t_RinexClock *self);
          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self);
          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data);
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data);
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data);
          static PyGetSetDef t_RinexClock__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexClock, agencyName),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterID),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterName),
            DECLARE_GET_FIELD(t_RinexClock, clockData),
            DECLARE_GET_FIELD(t_RinexClock, clockDataTypes),
            DECLARE_GET_FIELD(t_RinexClock, comments),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDate),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDateString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeZoneString),
            DECLARE_GETSET_FIELD(t_RinexClock, externalClockReference),
            DECLARE_GETSET_FIELD(t_RinexClock, formatVersion),
            DECLARE_GET_FIELD(t_RinexClock, frame),
            DECLARE_GETSET_FIELD(t_RinexClock, frameName),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedPCVS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfClockDataTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSeconds),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSecondsGNSS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfReceivers),
            DECLARE_GET_FIELD(t_RinexClock, numberOfSatellites),
            DECLARE_GETSET_FIELD(t_RinexClock, programName),
            DECLARE_GET_FIELD(t_RinexClock, receivers),
            DECLARE_GET_FIELD(t_RinexClock, referenceClocks),
            DECLARE_GETSET_FIELD(t_RinexClock, satelliteSystem),
            DECLARE_GET_FIELD(t_RinexClock, satellites),
            DECLARE_GETSET_FIELD(t_RinexClock, stationIdentifier),
            DECLARE_GETSET_FIELD(t_RinexClock, stationName),
            DECLARE_GET_FIELD(t_RinexClock, systemObservationTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, timeScale),
            DECLARE_GETSET_FIELD(t_RinexClock, timeSystem),
            DECLARE_GET_FIELD(t_RinexClock, totalNumberOfDataLines),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexClock, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexClock, addClockData, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addClockDataType, METH_O),
            DECLARE_METHOD(t_RinexClock, addComment, METH_O),
            DECLARE_METHOD(t_RinexClock, addReceiver, METH_O),
            DECLARE_METHOD(t_RinexClock, addReferenceClockList, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addSatellite, METH_O),
            DECLARE_METHOD(t_RinexClock, addSystemObservationType, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockData, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getComments, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDateString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeZoneString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getExternalClockReference, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrameName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSecondsGNSS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReferenceClocks, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSystemObservationTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTotalNumberOfDataLines, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, numberOfObsTypes, METH_O),
            DECLARE_METHOD(t_RinexClock, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterID, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterName, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDateString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeZoneString, METH_O),
            DECLARE_METHOD(t_RinexClock, setExternalClockReference, METH_O),
            DECLARE_METHOD(t_RinexClock, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexClock, setFrameName, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSecondsGNSS, METH_O),
            DECLARE_METHOD(t_RinexClock, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexClock, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationIdentifier, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationName, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeScale, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeSystem, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock)[] = {
            { Py_tp_methods, t_RinexClock__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock, t_RinexClock, RinexClock);

          void t_RinexClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock), &PY_TYPE_DEF(RinexClock), module, "RinexClock", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "Receiver", make_descriptor(&PY_TYPE_DEF(RinexClock$Receiver)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ClockDataType", make_descriptor(&PY_TYPE_DEF(RinexClock$ClockDataType)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ReferenceClock", make_descriptor(&PY_TYPE_DEF(RinexClock$ReferenceClock)));
          }

          void t_RinexClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "class_", make_descriptor(RinexClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "wrapfn_", make_descriptor(t_RinexClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock::wrap_Object(RinexClock(((t_RinexClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addClockData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockData", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_))
            {
              OBJ_CALL(self->object.addClockDataType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addComment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$Receiver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::clock::RinexClock$Receiver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addReceiver(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReceiver", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              OBJ_CALL(self->object.addReferenceClockList(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReferenceClockList", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addSatellite(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.addSystemObservationType(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemObservationType", args);
            return NULL;
          }

          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterID());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getClockData(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$ClockDataType));
          }

          static PyObject *t_RinexClock_getComments(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZoneString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getExternalClockReference());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock_getFrame(t_RinexClock *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrameName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$Receiver));
          }

          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getStationName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.numberOfObsTypes(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "numberOfObsTypes", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterID(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterID", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationDateString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZoneString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZoneString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setExternalClockReference(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setExternalClockReference", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setFrameName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFrameName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSecondsGNSS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSecondsGNSS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationIdentifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationIdentifier", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTimeScale(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterID());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterID(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterID", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterName());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return j2p(value);
          }

          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationDateString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZoneString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZoneString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZoneString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getExternalClockReference());
            return j2p(value);
          }
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setExternalClockReference(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "externalClockReference", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrameName());
            return j2p(value);
          }
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setFrameName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "frameName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSecondsGNSS(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSecondsGNSS", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationIdentifier());
            return j2p(value);
          }
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationIdentifier(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationIdentifier", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationName());
            return j2p(value);
          }
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeScale(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$Sigma::class$ = NULL;
            jmethodID *CMAESOptimizer$Sigma::mids$ = NULL;
            bool CMAESOptimizer$Sigma::live$ = false;

            jclass CMAESOptimizer$Sigma::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
                mids$[mid_getSigma_60c7040667a7dc5c] = env->getMethodID(cls, "getSigma", "()[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$Sigma::CMAESOptimizer$Sigma(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

            JArray< jdouble > CMAESOptimizer$Sigma::getSigma() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSigma_60c7040667a7dc5c]));
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
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args);
            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self);
            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data);
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$Sigma__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, sigma),
              DECLARE_GET_FIELD(t_CMAESOptimizer$Sigma, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$Sigma__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$Sigma, getSigma, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$Sigma)[] = {
              { Py_tp_methods, t_CMAESOptimizer$Sigma__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$Sigma_init_ },
              { Py_tp_getset, t_CMAESOptimizer$Sigma__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$Sigma)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$Sigma, t_CMAESOptimizer$Sigma, CMAESOptimizer$Sigma);
            PyObject *t_CMAESOptimizer$Sigma::wrap_Object(const CMAESOptimizer$Sigma& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$Sigma::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$Sigma::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$Sigma *self = (t_CMAESOptimizer$Sigma *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$Sigma::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$Sigma), &PY_TYPE_DEF(CMAESOptimizer$Sigma), module, "CMAESOptimizer$Sigma", 0);
            }

            void t_CMAESOptimizer$Sigma::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "class_", make_descriptor(CMAESOptimizer$Sigma::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "wrapfn_", make_descriptor(t_CMAESOptimizer$Sigma::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$Sigma), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$Sigma_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$Sigma::wrap_Object(CMAESOptimizer$Sigma(((t_CMAESOptimizer$Sigma *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$Sigma_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$Sigma::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$Sigma_of_(t_CMAESOptimizer$Sigma *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$Sigma_init_(t_CMAESOptimizer$Sigma *self, PyObject *args, PyObject *kwds)
            {
              JArray< jdouble > a0((jobject) NULL);
              CMAESOptimizer$Sigma object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = CMAESOptimizer$Sigma(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$Sigma_getSigma(t_CMAESOptimizer$Sigma *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getSigma());
              return result.wrap();
            }
            static PyObject *t_CMAESOptimizer$Sigma_get__parameters_(t_CMAESOptimizer$Sigma *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$Sigma_get__sigma(t_CMAESOptimizer$Sigma *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getSigma());
              return value.wrap();
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TwoBodiesBaryFrame::class$ = NULL;
      jmethodID *TwoBodiesBaryFrame::mids$ = NULL;
      bool TwoBodiesBaryFrame::live$ = false;

      jclass TwoBodiesBaryFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TwoBodiesBaryFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_628ee7a3e714b75c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TwoBodiesBaryFrame::TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_628ee7a3e714b75c, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_TwoBodiesBaryFrame__methods_[] = {
        DECLARE_METHOD(t_TwoBodiesBaryFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TwoBodiesBaryFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TwoBodiesBaryFrame)[] = {
        { Py_tp_methods, t_TwoBodiesBaryFrame__methods_ },
        { Py_tp_init, (void *) t_TwoBodiesBaryFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TwoBodiesBaryFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TwoBodiesBaryFrame, t_TwoBodiesBaryFrame, TwoBodiesBaryFrame);

      void t_TwoBodiesBaryFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TwoBodiesBaryFrame), &PY_TYPE_DEF(TwoBodiesBaryFrame), module, "TwoBodiesBaryFrame", 0);
      }

      void t_TwoBodiesBaryFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "class_", make_descriptor(TwoBodiesBaryFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "wrapfn_", make_descriptor(t_TwoBodiesBaryFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TwoBodiesBaryFrame::initializeClass, 1)))
          return NULL;
        return t_TwoBodiesBaryFrame::wrap_Object(TwoBodiesBaryFrame(((t_TwoBodiesBaryFrame *) arg)->object.this$));
      }
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TwoBodiesBaryFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        TwoBodiesBaryFrame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TwoBodiesBaryFrame(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$FieldOccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$FieldOccultationAngles::mids$ = NULL;
      bool OccultationEngine$FieldOccultationAngles::live$ = false;

      jclass OccultationEngine$FieldOccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$FieldOccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_eba8e72a22c984ac] = env->getMethodID(cls, "getLimbRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOccultedApparentRadius_eba8e72a22c984ac] = env->getMethodID(cls, "getOccultedApparentRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSeparation_eba8e72a22c984ac] = env->getMethodID(cls, "getSeparation", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getLimbRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLimbRadius_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getOccultedApparentRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOccultedApparentRadius_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getSeparation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSeparation_eba8e72a22c984ac]));
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
      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$FieldOccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, separation),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$FieldOccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, of_, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$FieldOccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$FieldOccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$FieldOccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$FieldOccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$FieldOccultationAngles, t_OccultationEngine$FieldOccultationAngles, OccultationEngine$FieldOccultationAngles);
      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_Object(const OccultationEngine$FieldOccultationAngles& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OccultationEngine$FieldOccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$FieldOccultationAngles), &PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles), module, "OccultationEngine$FieldOccultationAngles", 0);
      }

      void t_OccultationEngine$FieldOccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "class_", make_descriptor(OccultationEngine$FieldOccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$FieldOccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$FieldOccultationAngles::wrap_Object(OccultationEngine$FieldOccultationAngles(((t_OccultationEngine$FieldOccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLimbRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLimbRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/BatchLSEstimator.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/BatchLSObserver.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *BatchLSEstimator::class$ = NULL;
        jmethodID *BatchLSEstimator::mids$ = NULL;
        bool BatchLSEstimator::live$ = false;

        jclass BatchLSEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/BatchLSEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd5efa1ff89b935a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer;[Lorg/orekit/propagation/conversion/PropagatorBuilder;)V");
            mids$[mid_addMeasurement_558d7f8249b8a2bc] = env->getMethodID(cls, "addMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
            mids$[mid_estimate_4570675aa9d951bc] = env->getMethodID(cls, "estimate", "()[Lorg/orekit/propagation/Propagator;");
            mids$[mid_getEvaluationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluationsCount", "()I");
            mids$[mid_getIterationsCount_570ce0828f81a2c1] = env->getMethodID(cls, "getIterationsCount", "()I");
            mids$[mid_getLastEstimations_6f5a75ccd8c04465] = env->getMethodID(cls, "getLastEstimations", "()Ljava/util/Map;");
            mids$[mid_getMeasurementsParametersDrivers_8357ebc867dea797] = env->getMethodID(cls, "getMeasurementsParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getOptimum_4dc503511ffe30c5] = env->getMethodID(cls, "getOptimum", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_getOrbitalParametersDrivers_8357ebc867dea797] = env->getMethodID(cls, "getOrbitalParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalCovariances_f21dcd9464c6e3c5] = env->getMethodID(cls, "getPhysicalCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagatorParametersDrivers_8357ebc867dea797] = env->getMethodID(cls, "getPropagatorParametersDrivers", "(Z)Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_setConvergenceChecker_a5d0ffcf0a6327fe] = env->getMethodID(cls, "setConvergenceChecker", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
            mids$[mid_setMaxEvaluations_99803b0791f320ff] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
            mids$[mid_setMaxIterations_99803b0791f320ff] = env->getMethodID(cls, "setMaxIterations", "(I)V");
            mids$[mid_setObserver_6744390b0e26b959] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/leastsquares/BatchLSObserver;)V");
            mids$[mid_setParametersConvergenceThreshold_17db3a65980d3441] = env->getMethodID(cls, "setParametersConvergenceThreshold", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BatchLSEstimator::BatchLSEstimator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer & a0, const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd5efa1ff89b935a, a0.this$, a1.this$)) {}

        void BatchLSEstimator::addMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMeasurement_558d7f8249b8a2bc], a0.this$);
        }

        JArray< ::org::orekit::propagation::Propagator > BatchLSEstimator::estimate() const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimate_4570675aa9d951bc]));
        }

        jint BatchLSEstimator::getEvaluationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluationsCount_570ce0828f81a2c1]);
        }

        jint BatchLSEstimator::getIterationsCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterationsCount_570ce0828f81a2c1]);
        }

        ::java::util::Map BatchLSEstimator::getLastEstimations() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getLastEstimations_6f5a75ccd8c04465]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getMeasurementsParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersDrivers_8357ebc867dea797], a0));
        }

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum BatchLSEstimator::getOptimum() const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_getOptimum_4dc503511ffe30c5]));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getOrbitalParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_8357ebc867dea797], a0));
        }

        ::org::hipparchus::linear::RealMatrix BatchLSEstimator::getPhysicalCovariances(jdouble a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalCovariances_f21dcd9464c6e3c5], a0));
        }

        ::org::orekit::utils::ParameterDriversList BatchLSEstimator::getPropagatorParametersDrivers(jboolean a0) const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagatorParametersDrivers_8357ebc867dea797], a0));
        }

        void BatchLSEstimator::setConvergenceChecker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConvergenceChecker_a5d0ffcf0a6327fe], a0.this$);
        }

        void BatchLSEstimator::setMaxEvaluations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_99803b0791f320ff], a0);
        }

        void BatchLSEstimator::setMaxIterations(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxIterations_99803b0791f320ff], a0);
        }

        void BatchLSEstimator::setObserver(const ::org::orekit::estimation::leastsquares::BatchLSObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_6744390b0e26b959], a0.this$);
        }

        void BatchLSEstimator::setParametersConvergenceThreshold(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setParametersConvergenceThreshold_17db3a65980d3441], a0);
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
      namespace leastsquares {
        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self);
        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg);
        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg);
        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data);
        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data);
        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_BatchLSEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_BatchLSEstimator, convergenceChecker),
          DECLARE_GET_FIELD(t_BatchLSEstimator, evaluationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, iterationsCount),
          DECLARE_GET_FIELD(t_BatchLSEstimator, lastEstimations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxEvaluations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, maxIterations),
          DECLARE_SET_FIELD(t_BatchLSEstimator, observer),
          DECLARE_GET_FIELD(t_BatchLSEstimator, optimum),
          DECLARE_SET_FIELD(t_BatchLSEstimator, parametersConvergenceThreshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BatchLSEstimator__methods_[] = {
          DECLARE_METHOD(t_BatchLSEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BatchLSEstimator, addMeasurement, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, estimate, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getEvaluationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getIterationsCount, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getLastEstimations, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getMeasurementsParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getOptimum, METH_NOARGS),
          DECLARE_METHOD(t_BatchLSEstimator, getOrbitalParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPhysicalCovariances, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, getPropagatorParametersDrivers, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setConvergenceChecker, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxEvaluations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setMaxIterations, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setObserver, METH_O),
          DECLARE_METHOD(t_BatchLSEstimator, setParametersConvergenceThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BatchLSEstimator)[] = {
          { Py_tp_methods, t_BatchLSEstimator__methods_ },
          { Py_tp_init, (void *) t_BatchLSEstimator_init_ },
          { Py_tp_getset, t_BatchLSEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BatchLSEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BatchLSEstimator, t_BatchLSEstimator, BatchLSEstimator);

        void t_BatchLSEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(BatchLSEstimator), &PY_TYPE_DEF(BatchLSEstimator), module, "BatchLSEstimator", 0);
        }

        void t_BatchLSEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "class_", make_descriptor(BatchLSEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "wrapfn_", make_descriptor(t_BatchLSEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BatchLSEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BatchLSEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BatchLSEstimator::initializeClass, 1)))
            return NULL;
          return t_BatchLSEstimator::wrap_Object(BatchLSEstimator(((t_BatchLSEstimator *) arg)->object.this$));
        }
        static PyObject *t_BatchLSEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BatchLSEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BatchLSEstimator_init_(t_BatchLSEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer a0((jobject) NULL);
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a1((jobject) NULL);
          BatchLSEstimator object((jobject) NULL);

          if (!parseArgs(args, "k[k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer::initializeClass, ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1))
          {
            INT_CALL(object = BatchLSEstimator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BatchLSEstimator_addMeasurement(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(self->object.addMeasurement(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMeasurement", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_estimate(t_BatchLSEstimator *self)
        {
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimate());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
        }

        static PyObject *t_BatchLSEstimator_getEvaluationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getIterationsCount(t_BatchLSEstimator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterationsCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BatchLSEstimator_getLastEstimations(t_BatchLSEstimator *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getMeasurementsParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getMeasurementsParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getMeasurementsParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getOptimum(t_BatchLSEstimator *self)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);
          OBJ_CALL(result = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
        }

        static PyObject *t_BatchLSEstimator_getOrbitalParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getOrbitalParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOrbitalParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPhysicalCovariances(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPhysicalCovariances(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhysicalCovariances", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_getPropagatorParametersDrivers(t_BatchLSEstimator *self, PyObject *arg)
        {
          jboolean a0;
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getPropagatorParametersDrivers(a0));
            return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagatorParametersDrivers", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setConvergenceChecker(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
          {
            OBJ_CALL(self->object.setConvergenceChecker(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConvergenceChecker", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setMaxEvaluations(t_BatchLSEstimator *self, PyObject *arg)
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

        static PyObject *t_BatchLSEstimator_setMaxIterations(t_BatchLSEstimator *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setMaxIterations(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxIterations", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setObserver(t_BatchLSEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::leastsquares::BatchLSObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_BatchLSEstimator_setParametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setParametersConvergenceThreshold(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setParametersConvergenceThreshold", arg);
          return NULL;
        }

        static int t_BatchLSEstimator_set__convergenceChecker(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &value))
            {
              INT_CALL(self->object.setConvergenceChecker(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "convergenceChecker", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__evaluationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__iterationsCount(t_BatchLSEstimator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterationsCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BatchLSEstimator_get__lastEstimations(t_BatchLSEstimator *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getLastEstimations());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__maxEvaluations(t_BatchLSEstimator *self, PyObject *arg, void *data)
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

        static int t_BatchLSEstimator_set__maxIterations(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setMaxIterations(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
          return -1;
        }

        static int t_BatchLSEstimator_set__observer(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::leastsquares::BatchLSObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::leastsquares::BatchLSObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_BatchLSEstimator_get__optimum(t_BatchLSEstimator *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum value((jobject) NULL);
          OBJ_CALL(value = self->object.getOptimum());
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(value);
        }

        static int t_BatchLSEstimator_set__parametersConvergenceThreshold(t_BatchLSEstimator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setParametersConvergenceThreshold(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "parametersConvergenceThreshold", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/EstimatedIonosphericModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/ionosphere/IonosphericMappingFunction.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *EstimatedIonosphericModel::class$ = NULL;
          jmethodID *EstimatedIonosphericModel::mids$ = NULL;
          bool EstimatedIonosphericModel::live$ = false;
          ::java::lang::String *EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT = NULL;

          jclass EstimatedIonosphericModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/EstimatedIonosphericModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e30c8862bd843d70] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericMappingFunction;D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_4964da8caf11638c] = env->getMethodID(cls, "pathDelay", "(DD[D)D");
              mids$[mid_pathDelay_ab95aee7419cc874] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_bea489d08473aa2e] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_28325ab4dabb069a] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              VERTICAL_TOTAL_ELECTRON_CONTENT = new ::java::lang::String(env->getStaticObjectField(cls, "VERTICAL_TOTAL_ELECTRON_CONTENT", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EstimatedIonosphericModel::EstimatedIonosphericModel(const ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e30c8862bd843d70, a0.this$, a1)) {}

          ::java::util::List EstimatedIonosphericModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble EstimatedIonosphericModel::pathDelay(jdouble a0, jdouble a1, const JArray< jdouble > & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_4964da8caf11638c], a0, a1, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_ab95aee7419cc874], a0.this$, a1, a2.this$));
          }

          jdouble EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_bea489d08473aa2e], a0.this$, a1.this$, a2, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement EstimatedIonosphericModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_28325ab4dabb069a], a0.this$, a1.this$, a2, a3.this$));
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
          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self);
          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args);
          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data);
          static PyGetSetDef t_EstimatedIonosphericModel__fields_[] = {
            DECLARE_GET_FIELD(t_EstimatedIonosphericModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EstimatedIonosphericModel__methods_[] = {
            DECLARE_METHOD(t_EstimatedIonosphericModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_EstimatedIonosphericModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EstimatedIonosphericModel)[] = {
            { Py_tp_methods, t_EstimatedIonosphericModel__methods_ },
            { Py_tp_init, (void *) t_EstimatedIonosphericModel_init_ },
            { Py_tp_getset, t_EstimatedIonosphericModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EstimatedIonosphericModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EstimatedIonosphericModel, t_EstimatedIonosphericModel, EstimatedIonosphericModel);

          void t_EstimatedIonosphericModel::install(PyObject *module)
          {
            installType(&PY_TYPE(EstimatedIonosphericModel), &PY_TYPE_DEF(EstimatedIonosphericModel), module, "EstimatedIonosphericModel", 0);
          }

          void t_EstimatedIonosphericModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "class_", make_descriptor(EstimatedIonosphericModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "wrapfn_", make_descriptor(t_EstimatedIonosphericModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(EstimatedIonosphericModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedIonosphericModel), "VERTICAL_TOTAL_ELECTRON_CONTENT", make_descriptor(j2p(*EstimatedIonosphericModel::VERTICAL_TOTAL_ELECTRON_CONTENT)));
          }

          static PyObject *t_EstimatedIonosphericModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EstimatedIonosphericModel::initializeClass, 1)))
              return NULL;
            return t_EstimatedIonosphericModel::wrap_Object(EstimatedIonosphericModel(((t_EstimatedIonosphericModel *) arg)->object.this$));
          }
          static PyObject *t_EstimatedIonosphericModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EstimatedIonosphericModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EstimatedIonosphericModel_init_(t_EstimatedIonosphericModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction a0((jobject) NULL);
            jdouble a1;
            EstimatedIonosphericModel object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericMappingFunction::initializeClass, &a0, &a1))
            {
              INT_CALL(object = EstimatedIonosphericModel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EstimatedIonosphericModel_getParametersDrivers(t_EstimatedIonosphericModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_EstimatedIonosphericModel_pathDelay(t_EstimatedIonosphericModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                JArray< jdouble > a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KD[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
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
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_EstimatedIonosphericModel_get__parametersDrivers(t_EstimatedIonosphericModel *self, void *data)
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
#include "org/orekit/files/sinex/Station.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Station$ReferenceSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Station::class$ = NULL;
        jmethodID *Station::mids$ = NULL;
        bool Station::live$ = false;

        jclass Station::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Station");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addAntennaTypeValidAfter_43c487dd457617b7] = env->getMethodID(cls, "addAntennaTypeValidAfter", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addAntennaTypeValidBefore_43c487dd457617b7] = env->getMethodID(cls, "addAntennaTypeValidBefore", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidAfter_26d2928ac4ff52fb] = env->getMethodID(cls, "addStationEccentricitiesValidAfter", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_addStationEccentricitiesValidBefore_26d2928ac4ff52fb] = env->getMethodID(cls, "addStationEccentricitiesValidBefore", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getAntennaType_22dfbc0bf613c8d6] = env->getMethodID(cls, "getAntennaType", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
            mids$[mid_getAntennaTypeTimeSpanMap_62c7757711639c83] = env->getMethodID(cls, "getAntennaTypeTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getDomes_11b109bd155ca898] = env->getMethodID(cls, "getDomes", "()Ljava/lang/String;");
            mids$[mid_getEccRefSystem_b49a536b596b207a] = env->getMethodID(cls, "getEccRefSystem", "()Lorg/orekit/files/sinex/Station$ReferenceSystem;");
            mids$[mid_getEccentricities_24461752d0eea1e3] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getEccentricitiesTimeSpanMap_62c7757711639c83] = env->getMethodID(cls, "getEccentricitiesTimeSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
            mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getSiteCode_11b109bd155ca898] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_getValidFrom_85703d13e302437e] = env->getMethodID(cls, "getValidFrom", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getValidUntil_85703d13e302437e] = env->getMethodID(cls, "getValidUntil", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_setDomes_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDomes", "(Ljava/lang/String;)V");
            mids$[mid_setEccRefSystem_bc949a69f75f8f6d] = env->getMethodID(cls, "setEccRefSystem", "(Lorg/orekit/files/sinex/Station$ReferenceSystem;)V");
            mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setPosition_029ff0cbf68ea054] = env->getMethodID(cls, "setPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_setSiteCode_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSiteCode", "(Ljava/lang/String;)V");
            mids$[mid_setValidFrom_600a2a61652bc473] = env->getMethodID(cls, "setValidFrom", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setValidUntil_600a2a61652bc473] = env->getMethodID(cls, "setValidUntil", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setVelocity_029ff0cbf68ea054] = env->getMethodID(cls, "setVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Station::Station() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void Station::addAntennaTypeValidAfter(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidAfter_43c487dd457617b7], a0.this$, a1.this$);
        }

        void Station::addAntennaTypeValidBefore(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addAntennaTypeValidBefore_43c487dd457617b7], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidAfter(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidAfter_26d2928ac4ff52fb], a0.this$, a1.this$);
        }

        void Station::addStationEccentricitiesValidBefore(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addStationEccentricitiesValidBefore_26d2928ac4ff52fb], a0.this$, a1.this$);
        }

        ::java::lang::String Station::getAntennaType(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAntennaType_22dfbc0bf613c8d6], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getAntennaTypeTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getAntennaTypeTimeSpanMap_62c7757711639c83]));
        }

        ::java::lang::String Station::getDomes() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDomes_11b109bd155ca898]));
        }

        ::org::orekit::files::sinex::Station$ReferenceSystem Station::getEccRefSystem() const
        {
          return ::org::orekit::files::sinex::Station$ReferenceSystem(env->callObjectMethod(this$, mids$[mid_getEccRefSystem_b49a536b596b207a]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getEccentricities(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_24461752d0eea1e3], a0.this$));
        }

        ::org::orekit::utils::TimeSpanMap Station::getEccentricitiesTimeSpanMap() const
        {
          return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getEccentricitiesTimeSpanMap_62c7757711639c83]));
        }

        ::org::orekit::time::AbsoluteDate Station::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
        }

        ::java::lang::String Station::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_11b109bd155ca898]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidFrom() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidFrom_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate Station::getValidUntil() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getValidUntil_85703d13e302437e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Station::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d52645e0d4c07563]));
        }

        void Station::setDomes(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDomes_d0bc48d5b00dc40c], a0.this$);
        }

        void Station::setEccRefSystem(const ::org::orekit::files::sinex::Station$ReferenceSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEccRefSystem_bc949a69f75f8f6d], a0.this$);
        }

        void Station::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
        }

        void Station::setPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosition_029ff0cbf68ea054], a0.this$);
        }

        void Station::setSiteCode(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSiteCode_d0bc48d5b00dc40c], a0.this$);
        }

        void Station::setValidFrom(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidFrom_600a2a61652bc473], a0.this$);
        }

        void Station::setValidUntil(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setValidUntil_600a2a61652bc473], a0.this$);
        }

        void Station::setVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVelocity_029ff0cbf68ea054], a0.this$);
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
      namespace sinex {
        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args);
        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args);
        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getDomes(t_Station *self);
        static PyObject *t_Station_getEccRefSystem(t_Station *self);
        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg);
        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self);
        static PyObject *t_Station_getEpoch(t_Station *self);
        static PyObject *t_Station_getPosition(t_Station *self);
        static PyObject *t_Station_getSiteCode(t_Station *self);
        static PyObject *t_Station_getValidFrom(t_Station *self);
        static PyObject *t_Station_getValidUntil(t_Station *self);
        static PyObject *t_Station_getVelocity(t_Station *self);
        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg);
        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg);
        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__domes(t_Station *self, void *data);
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data);
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data);
        static PyObject *t_Station_get__epoch(t_Station *self, void *data);
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__position(t_Station *self, void *data);
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__siteCode(t_Station *self, void *data);
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validFrom(t_Station *self, void *data);
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__validUntil(t_Station *self, void *data);
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data);
        static PyObject *t_Station_get__velocity(t_Station *self, void *data);
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data);
        static PyGetSetDef t_Station__fields_[] = {
          DECLARE_GET_FIELD(t_Station, antennaTypeTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, domes),
          DECLARE_GETSET_FIELD(t_Station, eccRefSystem),
          DECLARE_GET_FIELD(t_Station, eccentricitiesTimeSpanMap),
          DECLARE_GETSET_FIELD(t_Station, epoch),
          DECLARE_GETSET_FIELD(t_Station, position),
          DECLARE_GETSET_FIELD(t_Station, siteCode),
          DECLARE_GETSET_FIELD(t_Station, validFrom),
          DECLARE_GETSET_FIELD(t_Station, validUntil),
          DECLARE_GETSET_FIELD(t_Station, velocity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Station__methods_[] = {
          DECLARE_METHOD(t_Station, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addAntennaTypeValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidAfter, METH_VARARGS),
          DECLARE_METHOD(t_Station, addStationEccentricitiesValidBefore, METH_VARARGS),
          DECLARE_METHOD(t_Station, getAntennaType, METH_O),
          DECLARE_METHOD(t_Station, getAntennaTypeTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getDomes, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccRefSystem, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEccentricities, METH_O),
          DECLARE_METHOD(t_Station, getEccentricitiesTimeSpanMap, METH_NOARGS),
          DECLARE_METHOD(t_Station, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_Station, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_Station, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidFrom, METH_NOARGS),
          DECLARE_METHOD(t_Station, getValidUntil, METH_NOARGS),
          DECLARE_METHOD(t_Station, getVelocity, METH_NOARGS),
          DECLARE_METHOD(t_Station, setDomes, METH_O),
          DECLARE_METHOD(t_Station, setEccRefSystem, METH_O),
          DECLARE_METHOD(t_Station, setEpoch, METH_O),
          DECLARE_METHOD(t_Station, setPosition, METH_O),
          DECLARE_METHOD(t_Station, setSiteCode, METH_O),
          DECLARE_METHOD(t_Station, setValidFrom, METH_O),
          DECLARE_METHOD(t_Station, setValidUntil, METH_O),
          DECLARE_METHOD(t_Station, setVelocity, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Station)[] = {
          { Py_tp_methods, t_Station__methods_ },
          { Py_tp_init, (void *) t_Station_init_ },
          { Py_tp_getset, t_Station__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Station)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Station, t_Station, Station);

        void t_Station::install(PyObject *module)
        {
          installType(&PY_TYPE(Station), &PY_TYPE_DEF(Station), module, "Station", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "ReferenceSystem", make_descriptor(&PY_TYPE_DEF(Station$ReferenceSystem)));
        }

        void t_Station::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "class_", make_descriptor(Station::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "wrapfn_", make_descriptor(t_Station::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Station), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Station_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Station::initializeClass, 1)))
            return NULL;
          return t_Station::wrap_Object(Station(((t_Station *) arg)->object.this$));
        }
        static PyObject *t_Station_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Station::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Station_init_(t_Station *self, PyObject *args, PyObject *kwds)
        {
          Station object((jobject) NULL);

          INT_CALL(object = Station());
          self->object = object;

          return 0;
        }

        static PyObject *t_Station_addAntennaTypeValidAfter(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addAntennaTypeValidBefore(t_Station *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addAntennaTypeValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAntennaTypeValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidAfter(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidAfter(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidAfter", args);
          return NULL;
        }

        static PyObject *t_Station_addStationEccentricitiesValidBefore(t_Station *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addStationEccentricitiesValidBefore(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addStationEccentricitiesValidBefore", args);
          return NULL;
        }

        static PyObject *t_Station_getAntennaType(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAntennaType(a0));
            return j2p(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAntennaType", arg);
          return NULL;
        }

        static PyObject *t_Station_getAntennaTypeTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_Station_getDomes(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDomes());
          return j2p(result);
        }

        static PyObject *t_Station_getEccRefSystem(t_Station *self)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(result);
        }

        static PyObject *t_Station_getEccentricities(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Station_getEccentricitiesTimeSpanMap(t_Station *self)
        {
          ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
          OBJ_CALL(result = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
        }

        static PyObject *t_Station_getEpoch(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getPosition(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_getSiteCode(t_Station *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_Station_getValidFrom(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getValidUntil(t_Station *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Station_getVelocity(t_Station *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_Station_setDomes(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDomes(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDomes", arg);
          return NULL;
        }

        static PyObject *t_Station_setEccRefSystem(t_Station *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &a0, &p0, ::org::orekit::files::sinex::t_Station$ReferenceSystem::parameters_))
          {
            OBJ_CALL(self->object.setEccRefSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEccRefSystem", arg);
          return NULL;
        }

        static PyObject *t_Station_setEpoch(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setEpoch(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
          return NULL;
        }

        static PyObject *t_Station_setPosition(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setPosition(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosition", arg);
          return NULL;
        }

        static PyObject *t_Station_setSiteCode(t_Station *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setSiteCode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSiteCode", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidFrom(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidFrom(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidFrom", arg);
          return NULL;
        }

        static PyObject *t_Station_setValidUntil(t_Station *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setValidUntil(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setValidUntil", arg);
          return NULL;
        }

        static PyObject *t_Station_setVelocity(t_Station *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setVelocity(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVelocity", arg);
          return NULL;
        }

        static PyObject *t_Station_get__antennaTypeTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getAntennaTypeTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__domes(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDomes());
          return j2p(value);
        }
        static int t_Station_set__domes(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDomes(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "domes", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccRefSystem(t_Station *self, void *data)
        {
          ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccRefSystem());
          return ::org::orekit::files::sinex::t_Station$ReferenceSystem::wrap_Object(value);
        }
        static int t_Station_set__eccRefSystem(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::Station$ReferenceSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::Station$ReferenceSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setEccRefSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "eccRefSystem", arg);
          return -1;
        }

        static PyObject *t_Station_get__eccentricitiesTimeSpanMap(t_Station *self, void *data)
        {
          ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
          OBJ_CALL(value = self->object.getEccentricitiesTimeSpanMap());
          return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
        }

        static PyObject *t_Station_get__epoch(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__epoch(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setEpoch(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epoch", arg);
          return -1;
        }

        static PyObject *t_Station_get__position(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__position(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setPosition(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "position", arg);
          return -1;
        }

        static PyObject *t_Station_get__siteCode(t_Station *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
        static int t_Station_set__siteCode(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setSiteCode(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "siteCode", arg);
          return -1;
        }

        static PyObject *t_Station_get__validFrom(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidFrom());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validFrom(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidFrom(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validFrom", arg);
          return -1;
        }

        static PyObject *t_Station_get__validUntil(t_Station *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getValidUntil());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_Station_set__validUntil(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              INT_CALL(self->object.setValidUntil(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "validUntil", arg);
          return -1;
        }

        static PyObject *t_Station_get__velocity(t_Station *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocity());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
        static int t_Station_set__velocity(t_Station *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              INT_CALL(self->object.setVelocity(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "velocity", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *RecordType::class$ = NULL;
          jmethodID *RecordType::mids$ = NULL;
          bool RecordType::live$ = false;
          RecordType *RecordType::CAS = NULL;
          RecordType *RecordType::NET = NULL;
          RecordType *RecordType::STR = NULL;

          jclass RecordType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/RecordType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_b6c068ef5a333889] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_values_251a10f9b06adc38] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/RecordType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CAS = new RecordType(env->getStaticObjectField(cls, "CAS", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              NET = new RecordType(env->getStaticObjectField(cls, "NET", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              STR = new RecordType(env->getStaticObjectField(cls, "STR", "Lorg/orekit/gnss/metric/ntrip/RecordType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordType RecordType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RecordType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b6c068ef5a333889], a0.this$));
          }

          JArray< RecordType > RecordType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RecordType >(env->callStaticObjectMethod(cls, mids$[mid_values_251a10f9b06adc38]));
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
          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args);
          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RecordType_values(PyTypeObject *type);
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data);
          static PyGetSetDef t_RecordType__fields_[] = {
            DECLARE_GET_FIELD(t_RecordType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordType__methods_[] = {
            DECLARE_METHOD(t_RecordType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RecordType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RecordType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordType)[] = {
            { Py_tp_methods, t_RecordType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RecordType, t_RecordType, RecordType);
          PyObject *t_RecordType::wrap_Object(const RecordType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RecordType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RecordType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RecordType *self = (t_RecordType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RecordType::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordType), &PY_TYPE_DEF(RecordType), module, "RecordType", 0);
          }

          void t_RecordType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "class_", make_descriptor(RecordType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "wrapfn_", make_descriptor(t_RecordType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RecordType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "CAS", make_descriptor(t_RecordType::wrap_Object(*RecordType::CAS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "NET", make_descriptor(t_RecordType::wrap_Object(*RecordType::NET)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordType), "STR", make_descriptor(t_RecordType::wrap_Object(*RecordType::STR)));
          }

          static PyObject *t_RecordType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordType::initializeClass, 1)))
              return NULL;
            return t_RecordType::wrap_Object(RecordType(((t_RecordType *) arg)->object.this$));
          }
          static PyObject *t_RecordType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordType_of_(t_RecordType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RecordType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RecordType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::valueOf(a0));
              return t_RecordType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RecordType_values(PyTypeObject *type)
          {
            JArray< RecordType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::RecordType::values());
            return JArray<jobject>(result.this$).wrap(t_RecordType::wrap_jobject);
          }
          static PyObject *t_RecordType_get__parameters_(t_RecordType *self, void *data)
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
#include "org/orekit/rugged/raster/SimpleTile.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *SimpleTile::class$ = NULL;
        jmethodID *SimpleTile::mids$ = NULL;
        bool SimpleTile::live$ = false;

        jclass SimpleTile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/SimpleTile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_5824e1e5f0141611] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_dbbe5f05149dbf73] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_4508852644846c83] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_4508852644846c83] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_46f85b53d9aedd96] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_570ce0828f81a2c1] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_dff5885c2c873297] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_cc274332aee60547] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_46f85b53d9aedd96] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_570ce0828f81a2c1] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_dff5885c2c873297] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_dff5885c2c873297] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_dff5885c2c873297] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_dff5885c2c873297] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_dff5885c2c873297] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_dff5885c2c873297] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_dff5885c2c873297] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_86ffecc08a63eff0] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_setElevation_1506189166690b5e] = env->getMethodID(cls, "setElevation", "(IID)V");
            mids$[mid_setGeometry_3a52e67a9decc404] = env->getMethodID(cls, "setGeometry", "(DDDDII)V");
            mids$[mid_tileUpdateCompleted_0fa09c18fee449d5] = env->getMethodID(cls, "tileUpdateCompleted", "()V");
            mids$[mid_processUpdatedElevation_fa9d415d19f69361] = env->getMethodID(cls, "processUpdatedElevation", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint SimpleTile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_5824e1e5f0141611], a0.this$, a1.this$, a2, a3));
        }

        jdouble SimpleTile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_dbbe5f05149dbf73], a0, a1);
        }

        jint SimpleTile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_4508852644846c83], a0);
        }

        jint SimpleTile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_4508852644846c83], a0);
        }

        jdouble SimpleTile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_46f85b53d9aedd96], a0);
        }

        jint SimpleTile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_570ce0828f81a2c1]);
        }

        jdouble SimpleTile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_dff5885c2c873297]);
        }

        ::org::orekit::rugged::raster::Tile$Location SimpleTile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_cc274332aee60547], a0, a1));
        }

        jdouble SimpleTile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_46f85b53d9aedd96], a0);
        }

        jint SimpleTile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_570ce0828f81a2c1]);
        }

        jdouble SimpleTile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_dff5885c2c873297]);
        }

        jdouble SimpleTile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_dff5885c2c873297]);
        }

        jint SimpleTile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_570ce0828f81a2c1]);
        }

        jint SimpleTile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_570ce0828f81a2c1]);
        }

        jdouble SimpleTile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_dff5885c2c873297]);
        }

        jdouble SimpleTile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_dff5885c2c873297]);
        }

        jdouble SimpleTile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_dff5885c2c873297]);
        }

        jint SimpleTile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_570ce0828f81a2c1]);
        }

        jint SimpleTile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_570ce0828f81a2c1]);
        }

        jdouble SimpleTile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_dff5885c2c873297]);
        }

        jdouble SimpleTile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_dff5885c2c873297]);
        }

        jdouble SimpleTile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_86ffecc08a63eff0], a0, a1);
        }

        void SimpleTile::setElevation(jint a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_setElevation_1506189166690b5e], a0, a1, a2);
        }

        void SimpleTile::setGeometry(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_setGeometry_3a52e67a9decc404], a0, a1, a2, a3, a4, a5);
        }

        void SimpleTile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_0fa09c18fee449d5]);
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
      namespace raster {
        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg);
        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self);
        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args);
        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self);
        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data);
        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data);
        static PyGetSetDef t_SimpleTile__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleTile, latitudeRows),
          DECLARE_GET_FIELD(t_SimpleTile, latitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeColumns),
          DECLARE_GET_FIELD(t_SimpleTile, longitudeStep),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevation),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, maximumLongitude),
          DECLARE_GET_FIELD(t_SimpleTile, minElevation),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLatitude),
          DECLARE_GET_FIELD(t_SimpleTile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleTile__methods_[] = {
          DECLARE_METHOD(t_SimpleTile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleTile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_SimpleTile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_SimpleTile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setElevation, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, setGeometry, METH_VARARGS),
          DECLARE_METHOD(t_SimpleTile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleTile)[] = {
          { Py_tp_methods, t_SimpleTile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SimpleTile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleTile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SimpleTile, t_SimpleTile, SimpleTile);

        void t_SimpleTile::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleTile), &PY_TYPE_DEF(SimpleTile), module, "SimpleTile", 0);
        }

        void t_SimpleTile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "class_", make_descriptor(SimpleTile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "wrapfn_", make_descriptor(t_SimpleTile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleTile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleTile::initializeClass, 1)))
            return NULL;
          return t_SimpleTile::wrap_Object(SimpleTile(((t_SimpleTile *) arg)->object.this$));
        }
        static PyObject *t_SimpleTile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleTile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleTile_cellIntersection(t_SimpleTile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getElevationAtIndices(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLatitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getFloorLongitudeIndex(t_SimpleTile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLatitudeRows(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLatitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getLocation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeAtIndex(t_SimpleTile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_SimpleTile_getLongitudeColumns(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getLongitudeStep(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaxElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMaximumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMaximumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevation(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLatitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinElevationLongitudeIndex(t_SimpleTile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SimpleTile_getMinimumLatitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_getMinimumLongitude(t_SimpleTile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SimpleTile_interpolateElevation(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setElevation(t_SimpleTile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.setElevation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setElevation", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_setGeometry(t_SimpleTile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jint a4;
          jint a5;

          if (!parseArgs(args, "DDDDII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(self->object.setGeometry(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGeometry", args);
          return NULL;
        }

        static PyObject *t_SimpleTile_tileUpdateCompleted(t_SimpleTile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_SimpleTile_get__latitudeRows(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__latitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__longitudeColumns(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__longitudeStep(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maxElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__maximumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__maximumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevation(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLatitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minElevationLongitudeIndex(t_SimpleTile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SimpleTile_get__minimumLatitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SimpleTile_get__minimumLongitude(t_SimpleTile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedIntConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedIntConsumer::mids$ = NULL;
            bool ParseToken$IndexedIntConsumer::live$ = false;

            jclass ParseToken$IndexedIntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_6f37635c3285dbdf] = env->getMethodID(cls, "accept", "(II)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedIntConsumer::accept(jint a0, jint a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_6f37635c3285dbdf], a0, a1);
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
            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedIntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedIntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedIntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedIntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedIntConsumer, t_ParseToken$IndexedIntConsumer, ParseToken$IndexedIntConsumer);

            void t_ParseToken$IndexedIntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedIntConsumer), &PY_TYPE_DEF(ParseToken$IndexedIntConsumer), module, "ParseToken$IndexedIntConsumer", 0);
            }

            void t_ParseToken$IndexedIntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "class_", make_descriptor(ParseToken$IndexedIntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedIntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedIntConsumer::wrap_Object(ParseToken$IndexedIntConsumer(((t_ParseToken$IndexedIntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/models/earth/EarthITU453AtmosphereRefraction.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *EarthITU453AtmosphereRefraction::class$ = NULL;
        jmethodID *EarthITU453AtmosphereRefraction::mids$ = NULL;
        bool EarthITU453AtmosphereRefraction::live$ = false;

        jclass EarthITU453AtmosphereRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/EarthITU453AtmosphereRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getRefraction_dcbc7ce2902fa136] = env->getMethodID(cls, "getRefraction", "(D)D");
            mids$[mid_getTheta0_dff5885c2c873297] = env->getMethodID(cls, "getTheta0", "()D");
            mids$[mid_getThetaMin_dff5885c2c873297] = env->getMethodID(cls, "getThetaMin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EarthITU453AtmosphereRefraction::EarthITU453AtmosphereRefraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble EarthITU453AtmosphereRefraction::getRefraction(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRefraction_dcbc7ce2902fa136], a0);
        }

        jdouble EarthITU453AtmosphereRefraction::getTheta0() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTheta0_dff5885c2c873297]);
        }

        jdouble EarthITU453AtmosphereRefraction::getThetaMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThetaMin_dff5885c2c873297]);
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
        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg);
        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data);
        static PyGetSetDef t_EarthITU453AtmosphereRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, theta0),
          DECLARE_GET_FIELD(t_EarthITU453AtmosphereRefraction, thetaMin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EarthITU453AtmosphereRefraction__methods_[] = {
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getRefraction, METH_O),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getTheta0, METH_NOARGS),
          DECLARE_METHOD(t_EarthITU453AtmosphereRefraction, getThetaMin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EarthITU453AtmosphereRefraction)[] = {
          { Py_tp_methods, t_EarthITU453AtmosphereRefraction__methods_ },
          { Py_tp_init, (void *) t_EarthITU453AtmosphereRefraction_init_ },
          { Py_tp_getset, t_EarthITU453AtmosphereRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EarthITU453AtmosphereRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EarthITU453AtmosphereRefraction, t_EarthITU453AtmosphereRefraction, EarthITU453AtmosphereRefraction);

        void t_EarthITU453AtmosphereRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(EarthITU453AtmosphereRefraction), &PY_TYPE_DEF(EarthITU453AtmosphereRefraction), module, "EarthITU453AtmosphereRefraction", 0);
        }

        void t_EarthITU453AtmosphereRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "class_", make_descriptor(EarthITU453AtmosphereRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "wrapfn_", make_descriptor(t_EarthITU453AtmosphereRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EarthITU453AtmosphereRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 1)))
            return NULL;
          return t_EarthITU453AtmosphereRefraction::wrap_Object(EarthITU453AtmosphereRefraction(((t_EarthITU453AtmosphereRefraction *) arg)->object.this$));
        }
        static PyObject *t_EarthITU453AtmosphereRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EarthITU453AtmosphereRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EarthITU453AtmosphereRefraction_init_(t_EarthITU453AtmosphereRefraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EarthITU453AtmosphereRefraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EarthITU453AtmosphereRefraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getRefraction(t_EarthITU453AtmosphereRefraction *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRefraction(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
          return NULL;
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getTheta0(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTheta0());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_getThetaMin(t_EarthITU453AtmosphereRefraction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThetaMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__theta0(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTheta0());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EarthITU453AtmosphereRefraction_get__thetaMin(t_EarthITU453AtmosphereRefraction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThetaMin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/IntegratedEphemeris.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "java/util/List.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/DenseOutputModel.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *IntegratedEphemeris::class$ = NULL;
        jmethodID *IntegratedEphemeris::mids$ = NULL;
        bool IntegratedEphemeris::live$ = false;

        jclass IntegratedEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/IntegratedEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d4da7daec623631] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/integration/StateMapper;Lorg/orekit/propagation/PropagationType;Lorg/hipparchus/ode/DenseOutputModel;Lorg/orekit/utils/DoubleArrayDictionary;Ljava/util/List;[Ljava/lang/String;[I)V");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_propagateOrbit_7a8f4c854607bed6] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getMass_bf1d7732f1acb697] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_resetIntermediateState_33f4696e4edaa03c] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_updateAdditionalStates_f43130c50e9fafeb] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_basicPropagate_fbff2ff5554d95e1] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IntegratedEphemeris::IntegratedEphemeris(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::propagation::integration::StateMapper & a3, const ::org::orekit::propagation::PropagationType & a4, const ::org::hipparchus::ode::DenseOutputModel & a5, const ::org::orekit::utils::DoubleArrayDictionary & a6, const ::java::util::List & a7, const JArray< ::java::lang::String > & a8, const JArray< jint > & a9) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_6d4da7daec623631, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

        ::org::orekit::frames::Frame IntegratedEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        ::org::orekit::propagation::SpacecraftState IntegratedEphemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_c6311115fea01a34]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate IntegratedEphemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_85703d13e302437e]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates IntegratedEphemeris::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
        }

        void IntegratedEphemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
        }

        void IntegratedEphemeris::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
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
      namespace integration {
        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self);
        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args);
        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args);
        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data);
        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data);
        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data);
        static PyGetSetDef t_IntegratedEphemeris__fields_[] = {
          DECLARE_SET_FIELD(t_IntegratedEphemeris, attitudeProvider),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, frame),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, initialState),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, maxDate),
          DECLARE_GET_FIELD(t_IntegratedEphemeris, minDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntegratedEphemeris__methods_[] = {
          DECLARE_METHOD(t_IntegratedEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntegratedEphemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_IntegratedEphemeris, setAttitudeProvider, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntegratedEphemeris)[] = {
          { Py_tp_methods, t_IntegratedEphemeris__methods_ },
          { Py_tp_init, (void *) t_IntegratedEphemeris_init_ },
          { Py_tp_getset, t_IntegratedEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntegratedEphemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(IntegratedEphemeris, t_IntegratedEphemeris, IntegratedEphemeris);

        void t_IntegratedEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(IntegratedEphemeris), &PY_TYPE_DEF(IntegratedEphemeris), module, "IntegratedEphemeris", 0);
        }

        void t_IntegratedEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "class_", make_descriptor(IntegratedEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "wrapfn_", make_descriptor(t_IntegratedEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntegratedEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntegratedEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntegratedEphemeris::initializeClass, 1)))
            return NULL;
          return t_IntegratedEphemeris::wrap_Object(IntegratedEphemeris(((t_IntegratedEphemeris *) arg)->object.this$));
        }
        static PyObject *t_IntegratedEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntegratedEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IntegratedEphemeris_init_(t_IntegratedEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::propagation::integration::StateMapper a3((jobject) NULL);
          ::org::orekit::propagation::PropagationType a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::ode::DenseOutputModel a5((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a6((jobject) NULL);
          ::java::util::List a7((jobject) NULL);
          PyTypeObject **p7;
          JArray< ::java::lang::String > a8((jobject) NULL);
          JArray< jint > a9((jobject) NULL);
          IntegratedEphemeris object((jobject) NULL);

          if (!parseArgs(args, "kkkkKkkK[s[I", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::integration::StateMapper::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::ode::DenseOutputModel::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_, &a5, &a6, &a7, &p7, ::java::util::t_List::parameters_, &a8, &a9))
          {
            INT_CALL(object = IntegratedEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IntegratedEphemeris_getFrame(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_getMaxDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getMinDate(t_IntegratedEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_IntegratedEphemeris_getPVCoordinates(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_resetInitialState(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_IntegratedEphemeris_setAttitudeProvider(t_IntegratedEphemeris *self, PyObject *args)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(IntegratedEphemeris), (PyObject *) self, "setAttitudeProvider", args, 2);
        }

        static int t_IntegratedEphemeris_set__attitudeProvider(t_IntegratedEphemeris *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_IntegratedEphemeris_get__frame(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__initialState(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__maxDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_IntegratedEphemeris_get__minDate(t_IntegratedEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MassDepletionDelay::class$ = NULL;
          jmethodID *MassDepletionDelay::mids$ = NULL;
          bool MassDepletionDelay::live$ = false;
          ::java::lang::String *MassDepletionDelay::PREFIX$ = NULL;

          jclass MassDepletionDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MassDepletionDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5a7a06dc2ea68812] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;)V");
              mids$[mid_combinedDerivatives_4fc0958a0539e1d3] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREFIX$ = new ::java::lang::String(env->getStaticObjectField(cls, "PREFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MassDepletionDelay::MassDepletionDelay(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::forces::maneuvers::Maneuver & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a7a06dc2ea68812, a0.this$, a1, a2.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives MassDepletionDelay::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_4fc0958a0539e1d3], a0.this$));
          }

          jint MassDepletionDelay::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          ::java::lang::String MassDepletionDelay::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          void MassDepletionDelay::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        namespace jacobians {
          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg);
          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args);
          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data);
          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data);
          static PyGetSetDef t_MassDepletionDelay__fields_[] = {
            DECLARE_GET_FIELD(t_MassDepletionDelay, dimension),
            DECLARE_GET_FIELD(t_MassDepletionDelay, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MassDepletionDelay__methods_[] = {
            DECLARE_METHOD(t_MassDepletionDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_MassDepletionDelay, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, getName, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MassDepletionDelay)[] = {
            { Py_tp_methods, t_MassDepletionDelay__methods_ },
            { Py_tp_init, (void *) t_MassDepletionDelay_init_ },
            { Py_tp_getset, t_MassDepletionDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MassDepletionDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MassDepletionDelay, t_MassDepletionDelay, MassDepletionDelay);

          void t_MassDepletionDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(MassDepletionDelay), &PY_TYPE_DEF(MassDepletionDelay), module, "MassDepletionDelay", 0);
          }

          void t_MassDepletionDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "class_", make_descriptor(MassDepletionDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "wrapfn_", make_descriptor(t_MassDepletionDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "boxfn_", make_descriptor(boxObject));
            env->getClass(MassDepletionDelay::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "PREFIX", make_descriptor(j2p(*MassDepletionDelay::PREFIX$)));
          }

          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MassDepletionDelay::initializeClass, 1)))
              return NULL;
            return t_MassDepletionDelay::wrap_Object(MassDepletionDelay(((t_MassDepletionDelay *) arg)->object.this$));
          }
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MassDepletionDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::forces::maneuvers::Maneuver a2((jobject) NULL);
            MassDepletionDelay object((jobject) NULL);

            if (!parseArgs(args, "sZk", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MassDepletionDelay(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args)
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

          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgmHeader::class$ = NULL;
              jmethodID *SsrIgmHeader::mids$ = NULL;
              bool SsrIgmHeader::live$ = false;

              jclass SsrIgmHeader::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgmHeader");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getNumberOfSatellites_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
                  mids$[mid_setNumberOfSatellites_99803b0791f320ff] = env->getMethodID(cls, "setNumberOfSatellites", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgmHeader::SsrIgmHeader() : ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIgmHeader::getNumberOfSatellites() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_570ce0828f81a2c1]);
              }

              void SsrIgmHeader::setNumberOfSatellites(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfSatellites_99803b0791f320ff], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self);
              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg);
              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data);
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgmHeader__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgmHeader, numberOfSatellites),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgmHeader__methods_[] = {
                DECLARE_METHOD(t_SsrIgmHeader, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgmHeader, getNumberOfSatellites, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgmHeader, setNumberOfSatellites, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgmHeader)[] = {
                { Py_tp_methods, t_SsrIgmHeader__methods_ },
                { Py_tp_init, (void *) t_SsrIgmHeader_init_ },
                { Py_tp_getset, t_SsrIgmHeader__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgmHeader)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgmHeader, t_SsrIgmHeader, SsrIgmHeader);

              void t_SsrIgmHeader::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgmHeader), &PY_TYPE_DEF(SsrIgmHeader), module, "SsrIgmHeader", 0);
              }

              void t_SsrIgmHeader::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "class_", make_descriptor(SsrIgmHeader::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "wrapfn_", make_descriptor(t_SsrIgmHeader::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgmHeader), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgmHeader_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgmHeader::initializeClass, 1)))
                  return NULL;
                return t_SsrIgmHeader::wrap_Object(SsrIgmHeader(((t_SsrIgmHeader *) arg)->object.this$));
              }
              static PyObject *t_SsrIgmHeader_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgmHeader::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgmHeader_init_(t_SsrIgmHeader *self, PyObject *args, PyObject *kwds)
              {
                SsrIgmHeader object((jobject) NULL);

                INT_CALL(object = SsrIgmHeader());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgmHeader_getNumberOfSatellites(t_SsrIgmHeader *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgmHeader_setNumberOfSatellites(t_SsrIgmHeader *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfSatellites(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfSatellites", arg);
                return NULL;
              }

              static PyObject *t_SsrIgmHeader_get__numberOfSatellites(t_SsrIgmHeader *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfSatellites());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgmHeader_set__numberOfSatellites(t_SsrIgmHeader *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfSatellites(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfSatellites", arg);
                return -1;
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
#include "org/hipparchus/linear/DefaultRealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultRealMatrixPreservingVisitor::live$ = false;

      jclass DefaultRealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_1506189166690b5e] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixPreservingVisitor::DefaultRealMatrixPreservingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      jdouble DefaultRealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void DefaultRealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      void DefaultRealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_1506189166690b5e], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixPreservingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixPreservingVisitor, t_DefaultRealMatrixPreservingVisitor, DefaultRealMatrixPreservingVisitor);

      void t_DefaultRealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultRealMatrixPreservingVisitor), module, "DefaultRealMatrixPreservingVisitor", 0);
      }

      void t_DefaultRealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "class_", make_descriptor(DefaultRealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixPreservingVisitor::wrap_Object(DefaultRealMatrixPreservingVisitor(((t_DefaultRealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixPreservingVisitor_init_(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixPreservingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixPreservingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_end(t_DefaultRealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_start(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixPreservingVisitor_visit(t_DefaultRealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *Parameterizable::class$ = NULL;
      jmethodID *Parameterizable::mids$ = NULL;
      bool Parameterizable::live$ = false;

      jclass Parameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/Parameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParametersNames_2afa36052df4765d] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_7edad2c2f64f4d68] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List Parameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_2afa36052df4765d]));
      }

      jboolean Parameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_7edad2c2f64f4d68], a0.this$);
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
      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self);
      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg);
      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data);
      static PyGetSetDef t_Parameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_Parameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Parameterizable__methods_[] = {
        DECLARE_METHOD(t_Parameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_Parameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Parameterizable)[] = {
        { Py_tp_methods, t_Parameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Parameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Parameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Parameterizable, t_Parameterizable, Parameterizable);

      void t_Parameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Parameterizable), &PY_TYPE_DEF(Parameterizable), module, "Parameterizable", 0);
      }

      void t_Parameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "class_", make_descriptor(Parameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "wrapfn_", make_descriptor(t_Parameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Parameterizable::initializeClass, 1)))
          return NULL;
        return t_Parameterizable::wrap_Object(Parameterizable(((t_Parameterizable *) arg)->object.this$));
      }
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Parameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventSlopeFilter.h"
#include "org/orekit/propagation/events/FilterType.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventSlopeFilter::class$ = NULL;
        jmethodID *EventSlopeFilter::mids$ = NULL;
        bool EventSlopeFilter::live$ = false;

        jclass EventSlopeFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventSlopeFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_23f1b60819ad787e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/FilterType;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_d73bb985ffde4156] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getFilter_1393923992462bde] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/propagation/events/FilterType;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_92757c1ef4145bae] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventSlopeFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventSlopeFilter::EventSlopeFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::FilterType & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_23f1b60819ad787e, a0.this$, a1.this$)) {}

        jdouble EventSlopeFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventSlopeFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d73bb985ffde4156]));
        }

        ::org::orekit::propagation::events::FilterType EventSlopeFilter::getFilter() const
        {
          return ::org::orekit::propagation::events::FilterType(env->callObjectMethod(this$, mids$[mid_getFilter_1393923992462bde]));
        }

        void EventSlopeFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args);
        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self);
        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args);
        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data);
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data);
        static PyGetSetDef t_EventSlopeFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventSlopeFilter, detector),
          DECLARE_GET_FIELD(t_EventSlopeFilter, filter),
          DECLARE_GET_FIELD(t_EventSlopeFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventSlopeFilter__methods_[] = {
          DECLARE_METHOD(t_EventSlopeFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventSlopeFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_EventSlopeFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventSlopeFilter)[] = {
          { Py_tp_methods, t_EventSlopeFilter__methods_ },
          { Py_tp_init, (void *) t_EventSlopeFilter_init_ },
          { Py_tp_getset, t_EventSlopeFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventSlopeFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventSlopeFilter, t_EventSlopeFilter, EventSlopeFilter);
        PyObject *t_EventSlopeFilter::wrap_Object(const EventSlopeFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventSlopeFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventSlopeFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventSlopeFilter *self = (t_EventSlopeFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventSlopeFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventSlopeFilter), &PY_TYPE_DEF(EventSlopeFilter), module, "EventSlopeFilter", 0);
        }

        void t_EventSlopeFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "class_", make_descriptor(EventSlopeFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "wrapfn_", make_descriptor(t_EventSlopeFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventSlopeFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventSlopeFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventSlopeFilter::initializeClass, 1)))
            return NULL;
          return t_EventSlopeFilter::wrap_Object(EventSlopeFilter(((t_EventSlopeFilter *) arg)->object.this$));
        }
        static PyObject *t_EventSlopeFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventSlopeFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventSlopeFilter_of_(t_EventSlopeFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventSlopeFilter_init_(t_EventSlopeFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::FilterType a1((jobject) NULL);
          PyTypeObject **p1;
          EventSlopeFilter object((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::FilterType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::events::t_FilterType::parameters_))
          {
            INT_CALL(object = EventSlopeFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventSlopeFilter_g(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventSlopeFilter_getDetector(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_getFilter(t_EventSlopeFilter *self)
        {
          ::org::orekit::propagation::events::FilterType result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(result);
        }

        static PyObject *t_EventSlopeFilter_init(t_EventSlopeFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventSlopeFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventSlopeFilter_get__parameters_(t_EventSlopeFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventSlopeFilter_get__detector(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventSlopeFilter_get__filter(t_EventSlopeFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FilterType value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::propagation::events::t_FilterType::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Transition::class$ = NULL;
      jmethodID *TimeSpanMap$Transition::mids$ = NULL;
      bool TimeSpanMap$Transition::live$ = false;

      jclass TimeSpanMap$Transition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Transition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAfter_4d26fd885228c716] = env->getMethodID(cls, "getAfter", "()Ljava/lang/Object;");
          mids$[mid_getBefore_4d26fd885228c716] = env->getMethodID(cls, "getBefore", "()Ljava/lang/Object;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSpanAfter_971209c2bf2033e7] = env->getMethodID(cls, "getSpanAfter", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpanBefore_971209c2bf2033e7] = env->getMethodID(cls, "getSpanBefore", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_next_75c9888155918ff9] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_previous_75c9888155918ff9] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Transition;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Transition::getAfter() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAfter_4d26fd885228c716]));
      }

      ::java::lang::Object TimeSpanMap$Transition::getBefore() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getBefore_4d26fd885228c716]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Transition::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanAfter() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanAfter_971209c2bf2033e7]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap$Transition::getSpanBefore() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpanBefore_971209c2bf2033e7]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::next() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_next_75c9888155918ff9]));
      }

      TimeSpanMap$Transition TimeSpanMap$Transition::previous() const
      {
        return TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_previous_75c9888155918ff9]));
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
      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self);
      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data);
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Transition__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, after),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, before),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, date),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanAfter),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, spanBefore),
        DECLARE_GET_FIELD(t_TimeSpanMap$Transition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Transition__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Transition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanAfter, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, getSpanBefore, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Transition, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Transition)[] = {
        { Py_tp_methods, t_TimeSpanMap$Transition__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Transition__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Transition *)) get_generic_next< t_TimeSpanMap$Transition,t_TimeSpanMap$Transition,TimeSpanMap$Transition >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Transition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Transition, t_TimeSpanMap$Transition, TimeSpanMap$Transition);
      PyObject *t_TimeSpanMap$Transition::wrap_Object(const TimeSpanMap$Transition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Transition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Transition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Transition *self = (t_TimeSpanMap$Transition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Transition::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Transition), &PY_TYPE_DEF(TimeSpanMap$Transition), module, "TimeSpanMap$Transition", 0);
      }

      void t_TimeSpanMap$Transition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "class_", make_descriptor(TimeSpanMap$Transition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "wrapfn_", make_descriptor(t_TimeSpanMap$Transition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Transition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Transition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Transition::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Transition::wrap_Object(TimeSpanMap$Transition(((t_TimeSpanMap$Transition *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Transition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Transition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Transition_of_(t_TimeSpanMap$Transition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Transition_getAfter(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getAfter());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getBefore(t_TimeSpanMap$Transition *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getBefore());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getDate(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanAfter(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_getSpanBefore(t_TimeSpanMap$Transition *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_next(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Transition_previous(t_TimeSpanMap$Transition *self)
      {
        TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Transition_get__parameters_(t_TimeSpanMap$Transition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Transition_get__after(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getAfter());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__before(t_TimeSpanMap$Transition *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getBefore());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__date(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanAfter(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanAfter());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Transition_get__spanBefore(t_TimeSpanMap$Transition *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpanBefore());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ModifierGradientConverter::class$ = NULL;
          jmethodID *ModifierGradientConverter::mids$ = NULL;
          bool ModifierGradientConverter::live$ = false;

          jclass ModifierGradientConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ModifierGradientConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e6e893d5ab0ccc3c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifierGradientConverter::ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_e6e893d5ab0ccc3c, a0.this$, a1, a2.this$)) {}
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
          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifierGradientConverter__methods_[] = {
            DECLARE_METHOD(t_ModifierGradientConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifierGradientConverter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifierGradientConverter)[] = {
            { Py_tp_methods, t_ModifierGradientConverter__methods_ },
            { Py_tp_init, (void *) t_ModifierGradientConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifierGradientConverter)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
            NULL
          };

          DEFINE_TYPE(ModifierGradientConverter, t_ModifierGradientConverter, ModifierGradientConverter);

          void t_ModifierGradientConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifierGradientConverter), &PY_TYPE_DEF(ModifierGradientConverter), module, "ModifierGradientConverter", 0);
          }

          void t_ModifierGradientConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "class_", make_descriptor(ModifierGradientConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "wrapfn_", make_descriptor(t_ModifierGradientConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifierGradientConverter::initializeClass, 1)))
              return NULL;
            return t_ModifierGradientConverter::wrap_Object(ModifierGradientConverter(((t_ModifierGradientConverter *) arg)->object.this$));
          }
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifierGradientConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ModifierGradientConverter object((jobject) NULL);

            if (!parseArgs(args, "kIk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ModifierGradientConverter(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1Field::mids$ = NULL;
        bool FieldUnivariateDerivative1Field::live$ = false;

        jclass FieldUnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_faf9f622bb313f1d] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative1Field_a0ad4c68e30cad98] = env->getStaticMethodID(cls, "getUnivariateDerivative1Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getZero_faf9f622bb313f1d] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_faf9f622bb313f1d]));
        }

        ::java::lang::Class FieldUnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        FieldUnivariateDerivative1Field FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative1Field_a0ad4c68e30cad98], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_faf9f622bb313f1d]));
        }

        jint FieldUnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getUnivariateDerivative1Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1Field, t_FieldUnivariateDerivative1Field, FieldUnivariateDerivative1Field);
        PyObject *t_FieldUnivariateDerivative1Field::wrap_Object(const FieldUnivariateDerivative1Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1Field), &PY_TYPE_DEF(FieldUnivariateDerivative1Field), module, "FieldUnivariateDerivative1Field", 0);
        }

        void t_FieldUnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "class_", make_descriptor(FieldUnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1Field::wrap_Object(FieldUnivariateDerivative1Field(((t_FieldUnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(a0));
            return t_FieldUnivariateDerivative1Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative1Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *FieldOfView::class$ = NULL;
        jmethodID *FieldOfView::mids$ = NULL;
        bool FieldOfView::live$ = false;

        jclass FieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/FieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFootprint_d179f90e70a637c1] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_dff5885c2c873297] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List FieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_d179f90e70a637c1], a0.this$, a1.this$, a2));
        }

        jdouble FieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_dff5885c2c873297]);
        }

        jdouble FieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_92bc6ba59ebf6937], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_d0fe714ef34714f7], a0.this$));
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
        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self);
        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg);
        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data);
        static PyGetSetDef t_FieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfView__methods_[] = {
          DECLARE_METHOD(t_FieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfView)[] = {
          { Py_tp_methods, t_FieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOfView, t_FieldOfView, FieldOfView);

        void t_FieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfView), &PY_TYPE_DEF(FieldOfView), module, "FieldOfView", 0);
        }

        void t_FieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "class_", make_descriptor(FieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "wrapfn_", make_descriptor(t_FieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfView::initializeClass, 1)))
            return NULL;
          return t_FieldOfView::wrap_Object(FieldOfView(((t_FieldOfView *) arg)->object.this$));
        }
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFootprint", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::propagation::events::VisibilityTrigger a2((jobject) NULL);
          PyTypeObject **p2;
          jdouble result;

          if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::propagation::events::VisibilityTrigger::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::propagation::events::t_VisibilityTrigger::parameters_))
          {
            OBJ_CALL(result = self->object.offsetFromBoundary(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "offsetFromBoundary", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }

        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/EventBasedScheduler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *EventBasedScheduler::class$ = NULL;
          jmethodID *EventBasedScheduler::mids$ = NULL;
          bool EventBasedScheduler::live$ = false;

          jclass EventBasedScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/EventBasedScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8f191e1abe71784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;Lorg/orekit/propagation/Propagator;Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/estimation/measurements/generation/SignSemantic;)V");
              mids$[mid_measurementIsFeasible_db6d81809797ddaa] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventBasedScheduler::EventBasedScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1, const ::org::orekit::propagation::Propagator & a2, const ::org::orekit::propagation::events::EventDetector & a3, const ::org::orekit::estimation::measurements::generation::SignSemantic & a4) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_c8f191e1abe71784, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          jboolean EventBasedScheduler::measurementIsFeasible(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_db6d81809797ddaa], a0.this$);
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
          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args);
          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg);
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data);
          static PyGetSetDef t_EventBasedScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_EventBasedScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventBasedScheduler__methods_[] = {
            DECLARE_METHOD(t_EventBasedScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventBasedScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_EventBasedScheduler, measurementIsFeasible, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventBasedScheduler)[] = {
            { Py_tp_methods, t_EventBasedScheduler__methods_ },
            { Py_tp_init, (void *) t_EventBasedScheduler_init_ },
            { Py_tp_getset, t_EventBasedScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventBasedScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(EventBasedScheduler, t_EventBasedScheduler, EventBasedScheduler);
          PyObject *t_EventBasedScheduler::wrap_Object(const EventBasedScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_EventBasedScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_EventBasedScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_EventBasedScheduler *self = (t_EventBasedScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_EventBasedScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventBasedScheduler), &PY_TYPE_DEF(EventBasedScheduler), module, "EventBasedScheduler", 0);
          }

          void t_EventBasedScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "class_", make_descriptor(EventBasedScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "wrapfn_", make_descriptor(t_EventBasedScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventBasedScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventBasedScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventBasedScheduler::initializeClass, 1)))
              return NULL;
            return t_EventBasedScheduler::wrap_Object(EventBasedScheduler(((t_EventBasedScheduler *) arg)->object.this$));
          }
          static PyObject *t_EventBasedScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventBasedScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EventBasedScheduler_of_(t_EventBasedScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_EventBasedScheduler_init_(t_EventBasedScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            ::org::orekit::propagation::Propagator a2((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a3((jobject) NULL);
            ::org::orekit::estimation::measurements::generation::SignSemantic a4((jobject) NULL);
            PyTypeObject **p4;
            EventBasedScheduler object((jobject) NULL);

            if (!parseArgs(args, "KkkkK", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::estimation::measurements::generation::SignSemantic::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::estimation::measurements::generation::t_SignSemantic::parameters_))
            {
              INT_CALL(object = EventBasedScheduler(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EventBasedScheduler_measurementIsFeasible(t_EventBasedScheduler *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }
          static PyObject *t_EventBasedScheduler_get__parameters_(t_EventBasedScheduler *self, void *data)
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
#include "org/orekit/python/PythonSupplier.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonSupplier::class$ = NULL;
      jmethodID *PythonSupplier::mids$ = NULL;
      bool PythonSupplier::live$ = false;

      jclass PythonSupplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonSupplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_get_4d26fd885228c716] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSupplier::PythonSupplier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonSupplier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonSupplier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonSupplier::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args);
      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self);
      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args);
      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data);
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data);
      static PyGetSetDef t_PythonSupplier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSupplier, self),
        DECLARE_GET_FIELD(t_PythonSupplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSupplier__methods_[] = {
        DECLARE_METHOD(t_PythonSupplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonSupplier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSupplier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSupplier)[] = {
        { Py_tp_methods, t_PythonSupplier__methods_ },
        { Py_tp_init, (void *) t_PythonSupplier_init_ },
        { Py_tp_getset, t_PythonSupplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSupplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSupplier, t_PythonSupplier, PythonSupplier);
      PyObject *t_PythonSupplier::wrap_Object(const PythonSupplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonSupplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonSupplier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSupplier), &PY_TYPE_DEF(PythonSupplier), module, "PythonSupplier", 1);
      }

      void t_PythonSupplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "class_", make_descriptor(PythonSupplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "wrapfn_", make_descriptor(t_PythonSupplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSupplier::initializeClass);
        JNINativeMethod methods[] = {
          { "get", "()Ljava/lang/Object;", (void *) t_PythonSupplier_get0 },
          { "pythonDecRef", "()V", (void *) t_PythonSupplier_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSupplier::initializeClass, 1)))
          return NULL;
        return t_PythonSupplier::wrap_Object(PythonSupplier(((t_PythonSupplier *) arg)->object.this$));
      }
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSupplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds)
      {
        PythonSupplier object((jobject) NULL);

        INT_CALL(object = PythonSupplier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args)
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

      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "get", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("get", result);
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

      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data)
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
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MultivariateInterpolator::class$ = NULL;
        jmethodID *MultivariateInterpolator::mids$ = NULL;
        bool MultivariateInterpolator::live$ = false;

        jclass MultivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MultivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_ade864ba8b3d9956] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::MultivariateFunction MultivariateInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_ade864ba8b3d9956], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_MultivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_MultivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateInterpolator)[] = {
          { Py_tp_methods, t_MultivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateInterpolator, t_MultivariateInterpolator, MultivariateInterpolator);

        void t_MultivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateInterpolator), &PY_TYPE_DEF(MultivariateInterpolator), module, "MultivariateInterpolator", 0);
        }

        void t_MultivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "class_", make_descriptor(MultivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "wrapfn_", make_descriptor(t_MultivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_MultivariateInterpolator::wrap_Object(MultivariateInterpolator(((t_MultivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
